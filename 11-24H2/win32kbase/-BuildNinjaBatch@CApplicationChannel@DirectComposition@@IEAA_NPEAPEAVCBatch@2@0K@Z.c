/*
 * XREFs of ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1400B85F4
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x140074BF0 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 * Callees:
 *     ?EmitUpdateCommands@CChannelMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x14007D6F8 (-EmitUpdateCommands@CChannelMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14007DF6C (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x14007F850 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?EmitBatchFenceCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B88C8 (-EmitBatchFenceCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B8954 (-EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B8A24 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400B8B20 (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAPEAVCResou.c)
 *     ?EmitApplicationIdCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B8C00 (-EmitApplicationIdCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B918C (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitNonDirtyingUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400B9338 (-EmitNonDirtyingUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAP.c)
 *     ?EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B939C (-EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     McTemplateK0qpqt_EtwWriteTransfer @ 0x1400B948C (McTemplateK0qpqt_EtwWriteTransfer.c)
 *     ?MarkAsLastNinja@CBatch@DirectComposition@@QEAAXXZ @ 0x140224F20 (-MarkAsLastNinja@CBatch@DirectComposition@@QEAAXXZ.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::BuildNinjaBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        int a4)
{
  bool v8; // di
  char v9; // cl
  DirectComposition::CBatch *v10; // rsi
  DirectComposition::CBatch *v11; // rdx
  struct DirectComposition::CBatch *BatchFragment; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  bool result; // al
  DirectComposition::CApplicationChannel *v17; // rcx
  DirectComposition::CApplicationChannel *v18; // rcx
  _DWORD *v19; // rax
  _DWORD *v20; // rax
  DirectComposition::CBatch *v21; // [rsp+80h] [rbp+40h] BYREF
  void *v22; // [rsp+88h] [rbp+48h] BYREF

  v8 = 1;
  DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  v9 = *((_BYTE *)this + 264);
  if ( (v9 & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 264) &= ~2u;
    v9 = *((_BYTE *)this + 264);
  }
  v10 = 0LL;
  v11 = 0LL;
  if ( *((_BYTE *)this + 56)
    || (v9 & 0x40) != 0
    || (*((_BYTE *)this + 265) & 3) != 0
    || *((_QWORD *)this + 60)
    || *((_QWORD *)this + 63)
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 58)
    || *((_QWORD *)this + 54)
    || *((_QWORD *)this + 57)
    || *((_QWORD *)this + 59) )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, a4, 1, 1, 1);
    v10 = BatchFragment;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
      McTemplateK0qpqt_EtwWriteTransfer(
        v14,
        v13,
        v15,
        *((_DWORD *)this + 7),
        (char)BatchFragment,
        *((_DWORD *)BatchFragment + 4),
        1);
    v21 = v10;
    if ( DirectComposition::CApplicationChannel::EmitBatchFenceCommand(this, &v21)
      && DirectComposition::CApplicationChannel::EmitDescriptionCommand(this, &v21)
      && DirectComposition::CApplicationChannel::EmitApplicationIdCommand(this, &v21)
      && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v21)
      && DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v21)
      && DirectComposition::CApplicationChannel::EmitReleaseCommands(this, &v21)
      && DirectComposition::CApplicationChannel::EmitCreationCommands(
           this,
           &v21,
           (struct DirectComposition::CResourceMarshaler **)this + 56)
      && DirectComposition::CApplicationChannel::EmitCreationCommands(
           this,
           &v21,
           (struct DirectComposition::CResourceMarshaler **)this + 58)
      && DirectComposition::CApplicationChannel::EmitCreationCommands(
           this,
           &v21,
           (struct DirectComposition::CResourceMarshaler **)this + 54) )
    {
      if ( DirectComposition::CChannelMarshaler::EmitUpdateCommands(
             (DirectComposition::CApplicationChannel *)((char *)this + 56),
             &v21) )
      {
        if ( DirectComposition::CApplicationChannel::EmitNonDirtyingUpdateCommands(
               v17,
               &v21,
               (struct DirectComposition::CResourceMarshaler **)this + 57)
          && DirectComposition::CApplicationChannel::EmitNonDirtyingUpdateCommands(
               v18,
               &v21,
               (struct DirectComposition::CResourceMarshaler **)this + 59) )
        {
          v22 = 0LL;
          if ( DirectComposition::CBatch::EnsureBatchBuffer(&v21, 8uLL, &v22) )
          {
            v19 = v22;
            *(_DWORD *)v22 = 8;
            v19[1] = 46;
            if ( !*((_DWORD *)this + 673) || (*((_BYTE *)this + 48) & 1) == 0 )
            {
LABEL_14:
              v11 = v21;
              *(_BYTE *)(*((_QWORD *)v21 + 17) + 64LL) = 0;
              if ( v8 )
                DirectComposition::CBatch::MarkAsLastNinja(v11);
              goto LABEL_16;
            }
            v22 = 0LL;
            if ( DirectComposition::CBatch::EnsureBatchBuffer(&v21, 0xCuLL, &v22) )
            {
              v20 = v22;
              *(_DWORD *)v22 = 12;
              v20[1] = 270;
              *((_WORD *)v20 + 4) = 0;
              *((_BYTE *)v20 + 10) = 1;
              goto LABEL_14;
            }
          }
        }
      }
    }
    v8 = 0;
    goto LABEL_14;
  }
LABEL_16:
  result = v8;
  *a2 = v10;
  *a3 = v11;
  return result;
}
