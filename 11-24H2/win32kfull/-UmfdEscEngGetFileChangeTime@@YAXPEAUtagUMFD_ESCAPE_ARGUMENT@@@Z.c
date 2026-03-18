/*
 * XREFs of ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1401D96B8
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2D48 (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z @ 0x1400B37C8 (-LookUp@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400B398C (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400B3F48 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     EngGetFileChangeTime @ 0x1401D9790 (EngGetFileChangeTime.c)
 */

void __fastcall UmfdEscEngGetFileChangeTime(struct tagUMFD_ESCAPE_ARGUMENT *a1, __int64 a2, __int64 a3)
{
  volatile void **v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rcx
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  HANDLE h; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER pChangeTime; // [rsp+50h] [rbp+18h] BYREF
  struct W32_PUSH_LOCK *v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = (volatile void **)((char *)a1 + 8);
  pChangeTime.QuadPart = 0LL;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v10, a2, a3);
  h = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v5, v4) + 96) + 24168LL);
  if ( v6
    && (v7 = *(_DWORD *)v3, NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LookUp(v6, &v7, &h))
    && EngGetFileChangeTime(h, &pChangeTime) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(&v10);
    ProbeForWrite(v3[1], 8uLL, 4u);
    *(LARGE_INTEGER *)v3[1] = pChangeTime;
    *(_DWORD *)v3 = 1;
  }
  else
  {
    *(_DWORD *)v3 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(&v10);
  }
}
