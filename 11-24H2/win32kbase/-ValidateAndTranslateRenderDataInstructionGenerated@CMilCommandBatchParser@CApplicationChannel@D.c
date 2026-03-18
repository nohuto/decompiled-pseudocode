/*
 * XREFs of ?ValidateAndTranslateRenderDataInstructionGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1400713C0
 * Callers:
 *     ?ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJXZ @ 0x140081BFC (-ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJ.c)
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14007FB30 (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x14008039C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateRenderDataInstructionGenerated(
        DirectComposition::CApplicationChannel **this,
        unsigned int *a2,
        int a3,
        __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx
  struct DirectComposition::CResourceMarshaler *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // edx
  struct DirectComposition::CResourceMarshaler *v18; // rax
  __int64 v19; // r8
  unsigned int v20; // edx
  struct DirectComposition::CResourceMarshaler *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // edx
  __int64 v25; // r8
  bool v27; // zf
  bool v28; // zf
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // edx
  struct DirectComposition::CResourceMarshaler *v33; // rax
  __int64 v34; // r8
  unsigned int v35; // edx
  unsigned int v36; // edx
  __int64 v37; // r9
  __int64 v38; // r9
  __int64 v39; // r9
  __int64 v40; // r9
  __int64 v41; // r9
  unsigned int v42; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  v5 = 0;
  v42 = 0;
  if ( v4 <= 0x1B1 )
  {
    if ( v4 == 433 )
    {
      if ( a3 != 28 )
        return (unsigned int)-1073741811;
      v24 = a2[1];
      if ( v24 )
      {
        v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v24);
        if ( !v13 )
          return (unsigned int)-1073741811;
        v14 = 95LL;
        goto LABEL_28;
      }
      return v5;
    }
    v15 = v4 - 428;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        if ( a3 != 16 )
          return (unsigned int)-1073741811;
        v17 = a2[1];
        if ( v17 )
        {
          v18 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v17);
          if ( v18
            && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                  *((unsigned int *)v18 + 9),
                                  95LL) )
          {
            a2[1] = *(_DWORD *)(v19 + 32);
          }
          else
          {
            v5 = -1073741811;
          }
        }
        v20 = a2[2];
        if ( !v20 )
          return v5;
        v21 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v20);
        if ( !v21 )
          return (unsigned int)-1073741811;
        v22 = 67LL;
LABEL_22:
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                 *((unsigned int *)v21 + 9),
                                 v22) )
          return (unsigned int)-1073741811;
        a2[2] = *(_DWORD *)(v23 + 32);
        return v5;
      }
      v30 = v16 - 1;
      if ( !v30 )
      {
        if ( a3 == 32 )
        {
          LOBYTE(a4) = 1;
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 1,
            67LL,
            a4,
            &v42);
          LOBYTE(v37) = 1;
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 2,
            25LL,
            v37,
            &v42);
          LOBYTE(v38) = 1;
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 3,
            25LL,
            v38,
            &v42);
          LOBYTE(v39) = 1;
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 4,
            62LL,
            v39,
            &v42);
          LOBYTE(v40) = 1;
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 5,
            62LL,
            v40,
            &v42);
          LOBYTE(v41) = 1;
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 6,
            62LL,
            v41,
            &v42);
          return v42;
        }
        return (unsigned int)-1073741811;
      }
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( a3 != 16 || v31 != 1 )
          return (unsigned int)-1073741811;
        v32 = a2[1];
        if ( v32 )
        {
          v33 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v32);
          if ( v33
            && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                  *((unsigned int *)v33 + 9),
                                  68LL) )
          {
            a2[1] = *(_DWORD *)(v34 + 32);
          }
          else
          {
            v5 = -1073741811;
          }
        }
        v35 = a2[2];
        if ( !v35 )
          return v5;
        v21 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v35);
        if ( !v21 )
          return (unsigned int)-1073741811;
        v22 = 85LL;
        goto LABEL_22;
      }
      v27 = a3 == 28;
    }
    else
    {
      v27 = a3 == 16;
    }
LABEL_32:
    if ( !v27 )
      return (unsigned int)-1073741811;
    v29 = a2[1];
    if ( !v29 )
      return v5;
    v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v29);
    if ( !v13 )
      return (unsigned int)-1073741811;
    v14 = 85LL;
    goto LABEL_28;
  }
  v8 = v4 - 434;
  if ( !v8 )
  {
    v28 = a3 == 40;
LABEL_35:
    if ( v28 )
      return v5;
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v27 = a3 == 40;
    goto LABEL_32;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 != 12 )
      return (unsigned int)-1073741811;
    v36 = a2[1];
    if ( !v36 )
      return v5;
    v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v36);
    if ( !v13 )
      return (unsigned int)-1073741811;
    v14 = 184LL;
    goto LABEL_28;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v28 = a3 == 8;
    goto LABEL_35;
  }
  if ( a3 != 12 || v11 != 1 )
    return (unsigned int)-1073741811;
  v12 = a2[1];
  if ( v12 )
  {
    v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v12);
    if ( !v13 )
      return (unsigned int)-1073741811;
    v14 = 174LL;
LABEL_28:
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)v13 + 9), v14) )
    {
      a2[1] = *(_DWORD *)(v25 + 32);
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  return v5;
}
