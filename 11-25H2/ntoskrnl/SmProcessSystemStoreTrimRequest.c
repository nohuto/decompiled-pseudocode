/*
 * XREFs of SmProcessSystemStoreTrimRequest @ 0x1408E915C
 * Callers:
 *     SmSetStoreInformation @ 0x1408E8E30 (SmSetStoreInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     SmKmStoreGet @ 0x140324324 (SmKmStoreGet.c)
 *     SmpGetProcessPartition @ 0x140498E1C (SmpGetProcessPartition.c)
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1404B4ABC (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x14093B9BC (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessSystemStoreTrimRequest(unsigned __int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // r8
  __int64 ProcessPartition; // rax
  int v10; // edx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // ebx
  __int128 v15; // [rsp+30h] [rbp-28h]
  _QWORD v16[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v16[0] = 0LL;
  if ( a2 < 0x10 )
  {
    v13 = -1073741306;
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( (unsigned __int64)a2 - 1 > 0xFFE )
    {
      ProbeForWrite((volatile void *)a1, a2, 8u);
    }
    else
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v6 = a1;
      *(_BYTE *)v6 = *(_BYTE *)v6;
      *(_BYTE *)(v6 + a2 - 1) = *(_BYTE *)(v6 + a2 - 1);
    }
  }
  v15 = *(_OWORD *)a1;
  v7 = (unsigned __int8)*(_OWORD *)a1;
  if ( (unsigned int)(v7 - 1) > 1 )
  {
    v13 = -1073741735;
    goto LABEL_19;
  }
  if ( v7 == 2 && a2 != 24 || v7 == 1 && a2 != 16 )
  {
    v13 = -1073741820;
    goto LABEL_19;
  }
  memmove(v16, (const void *)(a1 + 16), a2 - 16);
  if ( (v15 & 0xFFFFFF00) != 0 || !*((_QWORD *)&v15 + 1) )
  {
    v13 = -1073741811;
    goto LABEL_19;
  }
  if ( v16[0] )
  {
    LOBYTE(v8) = a3;
    v13 = PsReferencePartitionByHandle(v16[0], 2LL, v8, 1381264723LL, &v17);
    if ( v13 < 0 )
      goto LABEL_19;
    ProcessPartition = *(_QWORD *)(v17 + 24);
    if ( !ProcessPartition )
    {
      v13 = -1073741399;
      goto LABEL_19;
    }
  }
  else
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v10 = *(_DWORD *)(ProcessPartition + 2272);
  if ( v10 == -1 )
  {
    v13 = -1073741275;
  }
  else
  {
    v11 = (_DWORD *)SmKmStoreGet(ProcessPartition, v10);
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(v12, v11, *((_QWORD **)&v15 + 1));
  }
LABEL_19:
  if ( v17 )
    PsDereferencePartition(v17);
  return (unsigned int)v13;
}
