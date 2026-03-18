/*
 * XREFs of ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C0076F94
 * Callers:
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C0076ED4 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 *     vCleanupPrivateFonts @ 0x1C0114C90 (vCleanupPrivateFonts.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0115720 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013DEC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

struct PFF *__fastcall PUBLIC_PFTOBJ::bCleanupPFT(PFTOBJ *a1, int a2, _DWORD *a3)
{
  struct PFF *result; // rax
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct PFF **v11; // rdi
  __int64 v12; // r12
  struct PFF *v13; // rcx
  int v14; // eax
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  struct PFF *v17; // rcx
  struct PFF *v18; // [rsp+28h] [rbp-E0h]
  _QWORD v19[7]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h]
  struct PFF *v22; // [rsp+78h] [rbp-90h]
  int v23; // [rsp+9Ch] [rbp-6Ch]
  _QWORD *v24; // [rsp+F8h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF
  __int64 v26; // [rsp+190h] [rbp+88h]

  result = (struct PFF *)&retaddr;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v7 = 0;
    v8 = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
  }
  else
  {
    v8 = 20;
    v7 = 128;
  }
  memset(v19, 0, sizeof(v19));
  memset_0(&v20, 0, 0xE0uLL);
  v23 = 0x10000;
  HIDWORD(v19[1]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v24 = v19;
  if ( a3 )
    *a3 = 0;
  v10 = SGDGetSessionState(v9);
  v11 = (struct PFF **)(*(_QWORD *)a1 + 40LL);
  result = *(struct PFF **)(v10 + 32);
  v18 = result;
  if ( v8 )
  {
    v12 = v8;
    v26 = v8;
    do
    {
      result = SkipInvalidPff(*v11);
      v13 = result;
      if ( !result )
        goto LABEL_28;
      do
      {
        if ( a2 != 1 )
          goto LABEL_14;
        v14 = *((_DWORD *)v13 + 13);
        if ( (v14 & 0x400) == 0 )
          goto LABEL_26;
        if ( (v14 & 0x800) != 0 )
        {
          *((_DWORD *)v13 + 13) = v14 & 0xFFFFF7FF;
        }
        else
        {
LABEL_14:
          v22 = v13;
          v21 = *((_QWORD *)v13 + 1);
          *((_QWORD *)v13 + 1) = &v20;
          if ( v21 )
            *(_QWORD *)(v21 + 16) = &v20;
          if ( (unsigned int)PFTOBJ::bUnloadWorkhorse(a1, v13, v11, v7) )
          {
            GreQuerySystemTime((char *)v18 + 20288);
            if ( a3 )
              ++*a3;
          }
          v16 = Gre::Base::Globals(v15);
          GreAcquireSemaphore(*((_QWORD *)v16 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v16 + 6), 14LL);
          if ( *v11 == (struct PFF *)&v20 )
            *v11 = (struct PFF *)v21;
          v17 = v22;
          if ( v22 )
          {
            *((_QWORD *)v22 + 1) = v21;
            v17 = v22;
          }
          if ( v21 )
            *(_QWORD *)(v21 + 16) = v17;
          v13 = (struct PFF *)&v20;
        }
LABEL_26:
        result = SkipInvalidPff(*((struct PFF **)v13 + 1));
        v13 = result;
      }
      while ( result );
      v12 = v26;
LABEL_28:
      ++v11;
      v26 = --v12;
    }
    while ( v12 );
  }
  return result;
}
