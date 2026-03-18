/*
 * XREFs of bMoveDevPreviewRect @ 0x1401E09F0
 * Callers:
 *     bSetDevPreviewRect @ 0x1401D713C (bSetDevPreviewRect.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreUpdateSprite @ 0x1400CB8F0 (GreUpdateSprite.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1401E0C40 (DwmAsyncSendWindowArrangingData.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x140329B5C (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bMoveDevPreviewRect(Gre::Base *a1, const struct _RECTL *a2, char a3, __int64 a4, __int64 a5)
{
  int v5; // r12d
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  __int64 v9; // r14
  Gre::Base *v10; // r15
  unsigned int v11; // ebx
  int v12; // edx
  __int64 v13; // rcx
  LONG v14; // r10d
  LONG v15; // r9d
  void *v16; // rax
  BOOL v17; // edi
  int updated; // eax
  int v20; // [rsp+70h] [rbp-31h]
  Gre::Base *v21; // [rsp+80h] [rbp-21h] BYREF
  struct tagSIZE v22; // [rsp+88h] [rbp-19h] BYREF
  char v23[8]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v24; // [rsp+98h] [rbp-9h] BYREF
  struct _RECTL v25; // [rsp+A0h] [rbp-1h] BYREF

  v21 = a1;
  v5 = a3 & 1;
  v25 = 0LL;
  v8 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v24, v8);
  v9 = *(_QWORD *)v8 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v9);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)&v21);
  v10 = v21;
  v11 = 0;
  if ( *((_QWORD *)v21 + 156) )
  {
    v12 = *((_DWORD *)v21 + 317) - *((_DWORD *)v21 + 315);
    v13 = (unsigned int)(*((_DWORD *)v21 + 318) - *((_DWORD *)v21 + 316));
    v14 = a2->right - a2->left;
    v15 = a2->bottom - a2->top;
    v22.cx = v14;
    v22.cy = v15;
    if ( *((_DWORD *)v21 + 299) )
    {
      v16 = (void *)UserReferenceDwmApiPort(v13);
      v17 = (int)DwmAsyncSendWindowArrangingData(v16, a5) >= 0;
    }
    else
    {
      if ( v14 == v12 && v15 == (_DWORD)v13 )
      {
        v25 = *a2;
        updated = GreUpdateSprite(
                    (HDEV)a1,
                    0LL,
                    *((void **)v21 + 156),
                    0LL,
                    (struct tagPOINT *)&v25,
                    &v22,
                    0LL,
                    0LL,
                    0,
                    0LL,
                    0,
                    0LL,
                    0LL,
                    v5,
                    v20,
                    0);
      }
      else
      {
        updated = bSetPreviewRectContent((Gre::Base *)((char *)v21 + 80), a2);
      }
      v17 = updated;
    }
    if ( v17 )
      *(struct _RECTL *)((char *)v10 + 1260) = *a2;
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
    if ( v9 )
      GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v9);
    v11 = v17;
  }
  else
  {
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
    if ( v9 )
      GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v9);
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v24);
  return v11;
}
