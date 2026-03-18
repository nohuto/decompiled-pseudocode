/*
 * XREFs of ?Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z @ 0x180221944
 * Callers:
 *     PubSebRegisterRpc @ 0x180221740 (PubSebRegisterRpc.c)
 * Callees:
 *     ?Add@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@AEBQEAX@Z @ 0x1802219A4 (-Add@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_D.c)
 */

__int64 __fastcall ContextTable::Insert(ContextTable *this, struct _SEB_RPC_PUBLISH_DATA *a2, void *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  struct _SEB_RPC_PUBLISH_DATA *v6; // [rsp+38h] [rbp+10h] BYREF
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  RtlAcquireSRWLockExclusive(&unk_180406AE8);
  v4 = (unsigned int)ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::Add(
                       v3,
                       &v6,
                       &v7) == 0
     ? 0x54F
     : 0;
  RtlReleaseSRWLockExclusive(&unk_180406AE8);
  return v4;
}
