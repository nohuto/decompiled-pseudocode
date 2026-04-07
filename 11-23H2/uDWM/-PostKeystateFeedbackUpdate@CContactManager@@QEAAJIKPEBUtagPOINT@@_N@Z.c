/*
 * XREFs of ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18006C222
 * Callers:
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18006D1A0 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x1800CCB40 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UCKeystateTextFeedback@@$0A@@@QEAAJPEFBUCKeystateTextFeedback@@I@Z @ 0x1800AEFB0 (-AddMultipleAndSet@-$DynArray@UCKeystateTextFeedback@@$0A@@@QEAAJPEFBUCKeystateTextFeedback@@I@Z.c)
 *     ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x1800B4F2C (-PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z.c)
 */

__int64 __fastcall CContactManager::PostKeystateFeedbackUpdate(
        CContactManager *this,
        unsigned int a2,
        int a3,
        const struct tagPOINT *a4,
        bool a5)
{
  __int64 v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // r10
  __int64 v9; // rbx
  struct tagPOINT v10; // rax
  unsigned __int64 v11; // r8
  _DWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  struct tagPOINT v16; // [rsp+34h] [rbp-24h]
  __int64 v17; // [rsp+40h] [rbp-18h]

  v6 = a2;
  v7 = *((_DWORD *)this + 60);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = *((_QWORD *)this + 27);
    while ( *(_DWORD *)(v9 + 40 * v8) != a2 )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v7 )
        goto LABEL_5;
    }
    if ( (int)v8 >= 0 )
    {
      *(_QWORD *)(v9 + 40 * v8 + 20) = *(_QWORD *)(v9 + 40 * v8 + 8);
      *(_DWORD *)(*((_QWORD *)this + 27) + 40 * v8 + 16) = *(_DWORD *)(*((_QWORD *)this + 27) + 40 * v8 + 4);
      *(struct tagPOINT *)(*((_QWORD *)this + 27) + 40 * v8 + 8) = *a4;
      *(_DWORD *)(*((_QWORD *)this + 27) + 40 * v8 + 4) = a3;
      v11 = a5;
      goto LABEL_7;
    }
  }
LABEL_5:
  if ( a5 )
  {
    v10 = *a4;
    v17 = 0LL;
    v14 = v10;
    v16 = v10;
    v13[0] = a2;
    v13[1] = a3;
    v15 = a3;
    DynArray<CKeystateTextFeedback,0>::AddMultipleAndSet((char *)this + 216, v13);
    v11 = a5;
LABEL_7:
    CDesktopManager::PostEventMessage(CDesktopManager::s_pDesktopManagerInstance, 0x408u, v11, v6);
  }
  return 0LL;
}
