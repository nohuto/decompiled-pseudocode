/*
 * XREFs of vLinkEudcPFEs @ 0x1C00CBCE0
 * Callers:
 *     bAddAllFlEntry @ 0x1C001ADEC (bAddAllFlEntry.c)
 *     bDeleteAllFlEntry @ 0x1C01159AC (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C029E0C8 (GreEudcLoadLinkW.c)
 * Callees:
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C0086008 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     vLinkEudcPFEsWorker @ 0x1C00CAE30 (vLinkEudcPFEsWorker.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vLinkEudcPFEs(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 i; // rbx
  struct PFF *v8; // rdx
  __int64 v9; // rdi
  __int64 j; // rbx
  struct PFF *v11; // rdx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = Gre::Base::Globals(a1);
  v4 = SGDGetSessionState(v3);
  v13 = *((_QWORD *)v2 + 6);
  v5 = *(_QWORD *)(v4 + 32);
  GreAcquireSemaphore(v13);
  v6 = *(_QWORD *)(v5 + 20272);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 24); i = (unsigned int)(i + 1) )
  {
    v8 = *(struct PFF **)(v6 + 8 * i + 40);
    if ( v8 )
      vLinkEudcPFEsWorker((__int64)a1, v8);
  }
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v12);
  v9 = v12[0];
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v9 + 24); j = (unsigned int)(j + 1) )
  {
    v11 = *(struct PFF **)(v9 + 8 * j + 40);
    if ( v11 )
      vLinkEudcPFEsWorker((__int64)a1, v11);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
}
