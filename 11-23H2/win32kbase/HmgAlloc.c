/*
 * XREFs of HmgAlloc @ 0x1C003DD30
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C00DFF60 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C0151898 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C003DE70 (AllocateObject.c)
 *     HmgDecProcessHandleCount @ 0x1C003F938 (HmgDecProcessHandleCount.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C003FBE0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C0040440 (HmgIncProcessHandleCountEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0045AA0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     EtwTraceGdiCreateHandle @ 0x1C0047938 (EtwTraceGdiCreateHandle.c)
 *     FreeObject @ 0x1C0088C60 (FreeObject.c)
 */

struct HOBJ__ *__fastcall HmgAlloc(__int64 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  void *Object; // r15
  unsigned __int64 v8; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct HOBJ__ *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  struct HOBJ__ *v20; // rbx
  unsigned int EtwGdiHandleType; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v27; // [rsp+68h] [rbp+10h] BYREF
  __int64 v28; // [rsp+78h] [rbp+20h]

  v5 = a1;
  v28 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v6 = 0;
  Object = (void *)AllocateObject(v5);
  if ( !Object )
    return 0LL;
  v8 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    if ( (a3 & 0x10) == 0 )
    {
      v10 = *(_QWORD *)(ThreadWin32Thread + 72);
      if ( v10 )
        LODWORD(v8) = *(_DWORD *)(v10 + 8);
    }
  }
  GreAcquireHmgrSemaphore();
  if ( (a3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCountEx(v8) )
  {
LABEL_17:
    GreReleaseHmgrSemaphore(v12, v11, v13, v14);
    FreeObject(Object);
    return 0LL;
  }
  v27 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(*(GdiHandleManager **)(v28 + 8008), &v27) )
  {
    if ( (a3 & 8) == 0 )
      HmgDecProcessHandleCount((unsigned int)v8);
    goto LABEL_17;
  }
  v15 = ENTRYOBJ::hSetup((struct OBJECT *)Object, a2, a3, v27);
  LOBYTE(v19) = a2;
  v20 = v15;
  if ( (a3 & 8) == 0 )
    v6 = v8;
  EtwGdiHandleType = GetEtwGdiHandleType(v19, v16, v17, v18);
  EtwTraceGdiCreateHandle(v20, EtwGdiHandleType, v6);
  if ( (a3 & 3) != 0 )
    v20 = (struct HOBJ__ *)Object;
  GreReleaseHmgrSemaphore(v23, v22, v24, v25);
  return v20;
}
