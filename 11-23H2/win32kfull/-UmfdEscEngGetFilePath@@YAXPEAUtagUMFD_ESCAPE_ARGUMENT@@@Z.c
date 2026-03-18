/*
 * XREFs of ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A6D58
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00D0B30 (UmfdDispatchEscape.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003B918 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C00D4078 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00D41A4 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C013E7A8 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     EngGetFilePath @ 0x1C0278F50 (EngGetFilePath.c)
 */

void __fastcall UmfdEscEngGetFilePath(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  NSInstrumentation::CPrioritizedWriterLock *v3; // rcx
  int v4; // [rsp+20h] [rbp-258h] BYREF
  HANDLE h; // [rsp+28h] [rbp-250h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-248h] BYREF
  char *v7; // [rsp+38h] [rbp-240h]
  WCHAR pDest[261]; // [rsp+50h] [rbp-228h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  v7 = (char *)a1 + 8;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v6);
  h = 0LL;
  v3 = *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 23472LL);
  if ( v3
    && (v4 = *(_DWORD *)v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v3, &v4, &h))
    && EngGetFilePath(h, (WCHAR (*)[261])pDest) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v6);
    ProbeForWrite(v1[1], 0x20AuLL, 2u);
    if ( RtlStringCchCopyW((unsigned __int16 *)v1[1], 0x20AuLL, (size_t *)pDest) < 0 )
      *(_DWORD *)v1 = 0;
    *(_DWORD *)v1 = 1;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v6);
  }
}
