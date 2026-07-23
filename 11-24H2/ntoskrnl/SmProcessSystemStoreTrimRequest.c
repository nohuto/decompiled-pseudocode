/*
 * XREFs of SmProcessSystemStoreTrimRequest @ 0x140A58168
 * Callers:
 *     SmSetStoreInformation @ 0x140A57E40 (SmSetStoreInformation.c)
 * Callees:
 *     SmKmStoreGet @ 0x14020DEF4 (SmKmStoreGet.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1404AEC1C (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessSystemStoreTrimRequest(char *Address, SIZE_T Length, char a3)
{
  int v4; // edi
  __int64 v6; // rcx
  int v7; // ecx
  __int64 ProcessPartition; // rax
  int v9; // edx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  __int128 v14; // [rsp+30h] [rbp-28h]
  ULONG_PTR v15[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = Length;
  v16 = 0LL;
  v15[0] = 0LL;
  if ( (unsigned int)Length < 0x10 )
  {
    v12 = -1073741306;
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( (unsigned __int64)(unsigned int)Length - 1 > 0xFFE )
    {
      ProbeForWrite(Address, (unsigned int)Length, 8u);
    }
    else
    {
      if ( ((unsigned __int8)Address & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
        v6 = (__int64)Address;
      *(_BYTE *)v6 = *(_BYTE *)v6;
      *(_BYTE *)(v6 + (unsigned int)Length - 1) = *(_BYTE *)(v6 + (unsigned int)Length - 1);
    }
  }
  v14 = *(_OWORD *)Address;
  v7 = (unsigned __int8)*(_OWORD *)Address;
  if ( (unsigned int)(v7 - 1) > 1 )
  {
    v12 = -1073741735;
    goto LABEL_19;
  }
  if ( v7 == 2 && v4 != 24 || v7 == 1 && v4 != 16 )
  {
    v12 = -1073741820;
    goto LABEL_19;
  }
  memmove(v15, Address + 16, (unsigned int)(v4 - 16));
  if ( (v14 & 0xFFFFFF00) != 0 || !*((_QWORD *)&v14 + 1) )
  {
    v12 = -1073741811;
    goto LABEL_19;
  }
  if ( v15[0] )
  {
    v12 = PsReferencePartitionByHandle(v15[0], 2, a3, 0x52546D53u, &v16);
    if ( v12 < 0 )
      goto LABEL_19;
    ProcessPartition = *(_QWORD *)(v16 + 24);
    if ( !ProcessPartition )
    {
      v12 = -1073741399;
      goto LABEL_19;
    }
  }
  else
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v9 = *(_DWORD *)(ProcessPartition + 2272);
  if ( v9 == -1 )
  {
    v12 = -1073741275;
  }
  else
  {
    v10 = (_DWORD *)SmKmStoreGet(ProcessPartition, v9);
    v12 = SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(v11, v10, *((_QWORD **)&v14 + 1));
  }
LABEL_19:
  if ( v16 )
    PsDereferencePartition(v16);
  return (unsigned int)v12;
}
