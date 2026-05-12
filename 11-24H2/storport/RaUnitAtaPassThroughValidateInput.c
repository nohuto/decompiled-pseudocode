/*
 * XREFs of RaUnitAtaPassThroughValidateInput @ 0x140035D90
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x14004D8C4 (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaUnitAtaPassThroughValidateInput(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Length; // r14d
  __int64 Options; // rsi
  __int64 v9; // rdi
  _IRP *v10; // rcx
  unsigned __int16 v11; // ax
  _IRP *MasterIrp; // rbx
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int64 v15; // rdx
  bool v16; // zf
  char v17; // al
  unsigned __int16 Size; // ax
  unsigned __int64 v20; // r8
  _BYTE *v21; // rdx
  unsigned int IrpCount; // ecx
  unsigned int v23; // edx
  unsigned __int16 v24; // ax
  __int128 v25; // [rsp+20h] [rbp-68h] BYREF
  __int128 v26; // [rsp+30h] [rbp-58h]
  __int128 v27; // [rsp+40h] [rbp-48h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v25 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v26 = 0LL;
  v27 = 0LL;
  v9 = 0LL;
  if ( !IoIs32bitProcess(a2) )
  {
    if ( (unsigned int)Options < 0x30 )
      return 3221225485LL;
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp->Type == 48 )
    {
      Size = MasterIrp->Size;
      if ( (Size & 4) != 0 && !LODWORD(MasterIrp->MdlAddress) || (Size & 2) != 0 && !LODWORD(MasterIrp->MdlAddress) )
        return 3221225485LL;
      goto LABEL_8;
    }
    return 3221225561LL;
  }
  if ( (unsigned int)Options < 0x28 )
    return 3221225485LL;
  v10 = a2->AssociatedIrp.MasterIrp;
  if ( v10->Type != 40 )
    return 3221225561LL;
  v11 = v10->Size;
  if ( (v11 & 4) != 0 && !LODWORD(v10->MdlAddress) || (v11 & 2) != 0 && !LODWORD(v10->MdlAddress) )
    return 3221225485LL;
  MasterIrp = (_IRP *)&v25;
  v13 = *(_OWORD *)&v10->Type;
  *((_QWORD *)&v27 + 1) = v10->ThreadListEntry.Flink;
  v14 = *(_QWORD *)&v10->Flags;
  *(_QWORD *)&v27 = v10->AssociatedIrp.MasterIrp;
  *((_QWORD *)&v26 + 1) = *(&v10->Flags + 1);
  v25 = v13;
  *(_QWORD *)&v26 = v14;
LABEL_8:
  if ( !a3 )
  {
    v20 = (unsigned __int64)MasterIrp->AssociatedIrp.MasterIrp;
    if ( (unsigned __int16)MasterIrp->Type <= v20 || !LODWORD(MasterIrp->MdlAddress) )
    {
      if ( v20 > 0xFFFFFFFF )
        return 3221225621LL;
      IrpCount = MasterIrp->AssociatedIrp.IrpCount;
      v23 = IrpCount + LODWORD(MasterIrp->MdlAddress);
      if ( v23 < IrpCount )
        return 3221225621LL;
      v24 = MasterIrp->Size;
      if ( ((v24 & 4) == 0 || v23 <= (unsigned int)Options) && ((v24 & 2) == 0 || v23 <= Length) )
      {
        v15 = *(_QWORD *)(a1 + 8);
        v16 = ((__int64)((__int64)a2->AssociatedIrp.MasterIrp + v20) & *(unsigned int *)(v15 + 152)) == 0;
        goto LABEL_10;
      }
    }
    return 3221225485LL;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = (*(unsigned int *)(v15 + 152) & (__int64)MasterIrp->AssociatedIrp.MasterIrp) == 0;
LABEL_10:
  if ( !v16
    || (*(_DWORD *)(v15 + 152) & (__int64)MasterIrp->MdlAddress) != 0
    || (unsigned int)(HIDWORD(MasterIrp->MdlAddress) - 1) > 0x1A5DF )
  {
    return 3221225485LL;
  }
  if ( Length > (unsigned int)Options )
    memset_0((char *)a2->AssociatedIrp.MasterIrp + Options, 0, Length - (unsigned int)Options);
  v17 = BYTE6(MasterIrp->ThreadListEntry.Blink);
  if ( v17 != -76 )
  {
    if ( v17 != -15 )
      return 0LL;
    if ( !a3 )
    {
      if ( g_InWinPE )
      {
        v21 = (char *)MasterIrp->AssociatedIrp.MasterIrp + (unsigned __int64)a2->AssociatedIrp.MasterIrp;
        if ( (unsigned int)Options >= 0x230 && LODWORD(MasterIrp->MdlAddress) >= 0x200 && (*v21 & 1) == 0 )
        {
          while ( (unsigned int)v9 < 0x20 )
          {
            if ( (unsigned __int8)WellKnownPassword[v9] != (char)v21[v9 + 2] )
              return 3221225485LL;
            v9 = (unsigned int)(v9 + 1);
          }
          return 0LL;
        }
      }
    }
    return 3221225485LL;
  }
  return g_InWinPE == 0 ? 0xC00000BB : 0;
}
