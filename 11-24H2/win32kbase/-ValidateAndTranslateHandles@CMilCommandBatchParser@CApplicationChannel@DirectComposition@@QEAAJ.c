/*
 * XREFs of ?ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJXZ @ 0x140081BFC
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x140074BF0 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 * Callees:
 *     ?ValidateAndTranslateRenderDataInstructionGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1400713C0 (-ValidateAndTranslateRenderDataInstructionGenerated@CMilCommandBatchParser@CApplicationChannel@D.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14007FB30 (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x14008039C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x140081EA0 (-ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectCompositi.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateHandles(
        DirectComposition::CApplicationChannel::CMilCommandBatchParser *this)
{
  _QWORD *v1; // r12
  int v2; // ebx
  unsigned int v3; // r13d
  unsigned int *v4; // r15
  __int64 v5; // rsi
  struct DirectComposition::CResourceMarshaler *v7; // rax
  __int64 v8; // r9
  unsigned int i; // ecx
  unsigned int *v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r15
  struct DirectComposition::CResourceMarshaler *v14; // rax
  struct DirectComposition::CResourceMarshaler *v15; // r14
  struct DirectComposition::CResourceMarshaler *v16; // rax
  struct DirectComposition::CResourceMarshaler *v17; // rbx
  int v19; // [rsp+88h] [rbp+50h] BYREF
  unsigned int *v20; // [rsp+90h] [rbp+58h]
  _QWORD *v21; // [rsp+98h] [rbp+60h]

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  v2 = 0;
  v21 = v1;
  do
  {
    if ( !v1 )
      return (unsigned int)v2;
    v3 = *((_DWORD *)v1 + 5);
    v4 = (unsigned int *)(v1 + 3);
    v2 = 0;
    v20 = (unsigned int *)(v1 + 3);
    v19 = 0;
    while ( v3 >= 8 )
    {
      v5 = *v4;
      if ( (v5 & 3) != 0 || (unsigned int)v5 < 8 || (unsigned int)v5 > v3 )
      {
        v2 = -1073741811;
        v19 = -1073741811;
        goto LABEL_13;
      }
      switch ( v4[1] )
      {
        case 0x14Fu:
          if ( (unsigned int)v5 >= 0x10 )
          {
            v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                   *(DirectComposition::CApplicationChannel **)this,
                   v4[2]);
            if ( v7 )
            {
              for ( i = *((_DWORD *)v7 + 9); i < 0xC2; i = dword_140270F80[i] )
              {
                if ( i == 133 )
                {
                  v4[2] = *((_DWORD *)v7 + 8);
                  goto LABEL_26;
                }
              }
            }
            v2 = -1073741811;
            v19 = -1073741811;
LABEL_26:
            v10 = v4 + 4;
            v11 = v5 - 16;
            if ( v2 < 0 )
              goto LABEL_12;
            do
            {
              if ( v11 < 8 )
                break;
              v12 = *v10;
              v13 = v12;
              v2 = v12 > v11
                 ? -1073741811
                 : DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateRenderDataInstructionGenerated(
                     (DirectComposition::CApplicationChannel **)this,
                     v10 + 1,
                     v12,
                     v8);
              v10 = (unsigned int *)((char *)v10 + v13);
              v19 = v2;
              v11 -= v13;
            }
            while ( v2 >= 0 );
            v4 = v20;
            if ( v2 < 0 || !v11 )
              goto LABEL_12;
          }
LABEL_30:
          v2 = -1073741811;
          v19 = -1073741811;
          goto LABEL_12;
        case 0x185u:
          if ( (_DWORD)v5 == 24 )
          {
            v16 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                    *(DirectComposition::CApplicationChannel **)this,
                    v4[2]);
            v17 = v16;
            if ( v16
              && (DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v16 + 9), 184)
               || (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v17 + 208LL))(v17)
               && !v4[4]) )
            {
              v4[2] = *((_DWORD *)v17 + 8);
            }
            else
            {
              v19 = -1073741811;
            }
            DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
              (DirectComposition::CApplicationChannel **)this,
              v4 + 3,
              184,
              1,
              &v19);
            DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
              (DirectComposition::CApplicationChannel **)this,
              v4 + 4,
              184,
              1,
              &v19);
            v2 = v19;
            goto LABEL_12;
          }
          goto LABEL_30;
        case 0x187u:
          if ( (_DWORD)v5 == 12 )
          {
            v14 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                    *(DirectComposition::CApplicationChannel **)this,
                    v4[2]);
            v15 = v14;
            if ( v14 )
            {
              if ( DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v14 + 9), 184)
                || (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v15 + 208LL))(v15) )
              {
                v4[2] = *((_DWORD *)v15 + 8);
                goto LABEL_12;
              }
            }
          }
          goto LABEL_30;
      }
      v2 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandGenerated(
             this,
             v4 + 1,
             v5);
      v19 = v2;
LABEL_12:
      v4 = (unsigned int *)((char *)v4 + v5);
      v20 = v4;
      v3 -= v5;
LABEL_13:
      if ( v2 < 0 )
        break;
    }
    if ( v2 >= 0 && v3 )
      v2 = -1073741811;
    v1 = (_QWORD *)*v21;
    v21 = (_QWORD *)*v21;
  }
  while ( v2 >= 0 );
  return (unsigned int)v2;
}
