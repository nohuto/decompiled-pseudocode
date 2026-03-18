/*
 * XREFs of ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B36C4
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2D48 (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z @ 0x1400B37C8 (-LookUp@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400B398C (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     EngMapFontFileFDInternal @ 0x1400B39CC (EngMapFontFileFDInternal.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400B3F48 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 */

void __fastcall UmfdEscEngMapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+58h] [rbp+10h] BYREF
  struct FILEVIEW *v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h]

  v10 = 0LL;
  v1 = (volatile void **)((char *)a1 + 8);
  v7 = (char *)a1 + 8;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v6);
  v9 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v3, v2, v4) + 96) + 24168LL);
  if ( v5
    && (v8 = *(_DWORD *)v1,
        (unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LookUp(v5, &v8, &v9))
    && (unsigned int)EngMapFontFileFDInternal(v9) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v6);
    ProbeForWrite(v1[1], 8uLL, 8u);
    ProbeForWrite(v1[2], 4uLL, 4u);
    *(_QWORD *)v1[1] = v10;
    *(_DWORD *)v1[2] = 0;
    *(_DWORD *)v1 = 1;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v6);
  }
}
