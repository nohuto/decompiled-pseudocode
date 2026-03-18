/*
 * XREFs of ?ValidateAndTranslateCommandBlock@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1C020CB74
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1C0026EA4 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     NtDCompositionCommitChannel @ 0x1C00271A0 (NtDCompositionCommitChannel.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x1C020C8CC (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 *     ?ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1C0220534 (-ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectCompositi.c)
 *     ?ValidateAndTranslateRenderDataInstructionGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1C0222EA0 (-ValidateAndTranslateRenderDataInstructionGenerated@CMilCommandBatchParser@CApplicationChannel@D.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandBlock(
        DirectComposition::CApplicationChannel **this,
        int *a2,
        unsigned int a3)
{
  int v3; // ebx
  int *v5; // r15
  __int64 v7; // rsi
  struct DirectComposition::CResourceMarshaler *v8; // rax
  struct DirectComposition::CResourceMarshaler *v9; // r14
  struct DirectComposition::CResourceMarshaler *v10; // rax
  struct DirectComposition::CResourceMarshaler *v11; // rbx
  unsigned int *v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r15
  int *v17; // [rsp+78h] [rbp+48h]
  int v18; // [rsp+88h] [rbp+58h] BYREF

  v17 = a2;
  v3 = 0;
  v18 = 0;
  v5 = a2;
  while ( a3 >= 8 )
  {
    v7 = (unsigned int)*v5;
    if ( (v7 & 3) != 0 || (unsigned int)v7 < 8 || (unsigned int)v7 > a3 )
    {
      v3 = -1073741811;
      v18 = -1073741811;
      goto LABEL_36;
    }
    switch ( v5[1] )
    {
      case 334:
        if ( (unsigned int)v7 >= 0x10 )
        {
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            v5 + 2,
            145,
            0,
            &v18);
          v3 = v18;
          v12 = (unsigned int *)(v5 + 4);
          v13 = v7 - 16;
          if ( v18 < 0 )
            break;
          do
          {
            if ( v13 < 8 )
              break;
            v14 = *v12;
            v15 = v14;
            v3 = v14 <= v13
               ? DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateRenderDataInstructionGenerated(
                   (DirectComposition::CApplicationChannel::CMilCommandBatchParser *)this,
                   v12 + 1,
                   v14)
               : -1073741811;
            v12 = (unsigned int *)((char *)v12 + v15);
            v18 = v3;
            v13 -= v15;
          }
          while ( v3 >= 0 );
          v5 = v17;
          if ( v3 < 0 || !v13 )
            break;
        }
LABEL_16:
        v3 = -1073741811;
        v18 = -1073741811;
        break;
      case 390:
        if ( (_DWORD)v7 == 24 )
        {
          v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v5[2]);
          v11 = v10;
          if ( v10
            && (DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v10 + 9), 196)
             || (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v11 + 184LL))(v11)
             && !v5[4]) )
          {
            v5[2] = *((_DWORD *)v11 + 8);
          }
          else
          {
            v18 = -1073741811;
          }
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            v5 + 3,
            196,
            1,
            &v18);
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            v5 + 4,
            196,
            1,
            &v18);
          v3 = v18;
          break;
        }
        goto LABEL_16;
      case 392:
        if ( (_DWORD)v7 != 12 )
          goto LABEL_16;
        v8 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v5[2]);
        v9 = v8;
        if ( !v8
          || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v8 + 9), 196)
          && !(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v9 + 184LL))(v9) )
        {
          goto LABEL_16;
        }
        v5[2] = *((_DWORD *)v9 + 8);
        break;
      default:
        v3 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandGenerated(
               (DirectComposition::CApplicationChannel::CMilCommandBatchParser *)this,
               v5 + 1,
               v7);
        v18 = v3;
        break;
    }
    v5 = (int *)((char *)v5 + v7);
    v17 = v5;
    a3 -= v7;
LABEL_36:
    if ( v3 < 0 )
      break;
  }
  if ( v3 >= 0 && a3 )
    return (unsigned int)-1073741811;
  return (unsigned int)v3;
}
