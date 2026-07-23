/*
 * XREFs of VrpHandleIoctlCreateNamespaceNode @ 0x14092B88C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x14092B3C0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x1403E3CE0 (PsGetPermanentSiloContext.c)
 *     PsIsThreadInSilo @ 0x1404070DC (PsIsThreadInSilo.c)
 *     PsGetJobSilo @ 0x140407170 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpDestroyNamespaceNode @ 0x14092B1C0 (VrpDestroyNamespaceNode.c)
 *     VRegEnabledInJob @ 0x14092B820 (VRegEnabledInJob.c)
 *     VrpUnlockJobContextExclusive @ 0x14092BC6C (VrpUnlockJobContextExclusive.c)
 *     VrpCreateNamespaceNode @ 0x14092BCA8 (VrpCreateNamespaceNode.c)
 *     VrpLockJobContextExclusive @ 0x14092C1A4 (VrpLockJobContextExclusive.c)
 *     VrpAddNamespaceNodeToList @ 0x14092C204 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14092C328 (VrpCreateNamespaceNodePlaceholderKey.c)
 */

__int64 __fastcall VrpHandleIoctlCreateNamespaceNode(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        size_t *a6)
{
  size_t *v8; // rsi
  int v9; // r12d
  __int64 v10; // rdi
  int v11; // eax
  int v12; // edx
  unsigned int v13; // edx
  int JobSilo; // ebx
  int v15; // r15d
  unsigned __int64 v16; // rax
  int v17; // r14d
  int PermanentSiloContext; // eax
  int v19; // eax
  PVOID Object; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int128 v24; // [rsp+60h] [rbp-10h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+48h] BYREF

  Object = 0LL;
  a6 = 0LL;
  v25 = 0LL;
  a5 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( a2 < 0x18 )
    goto LABEL_24;
  v11 = *(unsigned __int16 *)(a1 + 8);
  if ( (v11 & 1) != 0 || (v12 = *(unsigned __int16 *)(a1 + 10), (v12 & 1) != 0) )
  {
    JobSilo = -1073741811;
  }
  else
  {
    if ( !(_WORD)v11 )
      goto LABEL_24;
    if ( !(_WORD)v12 )
      goto LABEL_24;
    v13 = v11 + 20 + v12;
    if ( v11 + 20 > v13 || a2 < v13 )
      goto LABEL_24;
    JobSilo = ObpReferenceObjectByHandleWithTag(
                *(_QWORD *)a1,
                6,
                (__int64)PsJobType,
                a3,
                0x52566D43u,
                &Object,
                0LL,
                0LL);
    if ( JobSilo >= 0 )
    {
      v15 = *(_DWORD *)(a1 + 12);
      *((_QWORD *)&v24 + 1) = a1 + 20;
      v16 = *(unsigned __int16 *)(a1 + 8);
      WORD1(v24) = v16;
      LOWORD(v24) = v16;
      *((_QWORD *)&v23 + 1) = a1 + 2 * ((v16 >> 1) + 10);
      LOWORD(v16) = *(_WORD *)(a1 + 10);
      v17 = *(_DWORD *)(a1 + 16);
      WORD1(v23) = v16;
      LOWORD(v23) = v16;
      if ( (v15 & 7) != v15 )
        goto LABEL_24;
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        if ( !PsIsThreadInSilo((__int64)KeGetCurrentThread(), a5) )
        {
          v22 = 0LL;
          VRegEnabledInJob(&v22);
          PermanentSiloContext = PsGetPermanentSiloContext(a5, VrpSiloContextSlot, (unsigned __int64 *)&a6);
          v8 = a6;
          JobSilo = PermanentSiloContext;
          if ( PermanentSiloContext < 0 )
          {
            v10 = v25;
          }
          else
          {
            VrpLockJobContextExclusive(a6);
            v9 = 1;
            v19 = VrpCreateNamespaceNode(v8, &v24, v22, &v23, v15, v17, &v25);
            v10 = v25;
            JobSilo = v19;
            if ( v19 >= 0 )
            {
              JobSilo = VrpAddNamespaceNodeToList(v8, v25);
              if ( JobSilo >= 0 )
              {
                JobSilo = VrpCreateNamespaceNodePlaceholderKey(v10);
                if ( JobSilo >= 0 )
                {
                  JobSilo = 0;
                  v10 = 0LL;
                }
              }
            }
          }
          goto LABEL_17;
        }
LABEL_24:
        JobSilo = -1073741811;
        goto LABEL_21;
      }
    }
  }
LABEL_17:
  if ( v10 )
    VrpDestroyNamespaceNode(v8, v10);
  if ( v9 )
    VrpUnlockJobContextExclusive(v8);
LABEL_21:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
