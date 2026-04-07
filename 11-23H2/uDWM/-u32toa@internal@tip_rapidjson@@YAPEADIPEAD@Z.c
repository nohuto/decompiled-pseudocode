/*
 * XREFs of ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x1800F3A08
 * Callers:
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x1800EFABC (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ?WriteInt@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_NH@Z @ 0x1800F1DC0 (-WriteInt@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_rap.c)
 * Callees:
 *     <none>
 */

char *__fastcall tip_rapidjson::internal::u32toa(tip_rapidjson::internal *this, _BYTE *a2, char *a3)
{
  _BYTE *v3; // r10
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // edx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  _BYTE *v15; // r10
  unsigned int v16; // r9d
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rbx

  v3 = a2;
  v4 = (unsigned int)this;
  if ( (unsigned int)this < 0x2710 )
  {
    v5 = 2 * ((unsigned int)this / 0x64);
    v6 = 2 * (v4 % 0x64);
    if ( v4 < 0x3E8 )
    {
      if ( v4 < 0x64 )
      {
        if ( v4 < 0xA )
        {
LABEL_8:
          v7 = (unsigned int)(v6 + 1);
          goto LABEL_21;
        }
LABEL_7:
        *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v6];
        goto LABEL_8;
      }
    }
    else
    {
      *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v5];
    }
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v5 + 1)];
    goto LABEL_7;
  }
  if ( (unsigned int)this < 0x5F5E100 )
  {
    v8 = 2 * ((unsigned int)this / 0x2710 / 0x64);
    v9 = 2 * (v4 / 0x2710 % 0x64);
    v10 = 2 * (v4 % 0x2710 / 0x64);
    v11 = 2 * (v4 % 0x2710 % 0x64);
    if ( v4 < 0x989680 )
    {
      if ( v4 < 0xF4240 )
      {
        if ( v4 < 0x186A0 )
        {
LABEL_16:
          *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v9 + 1)];
          v3[1] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v10];
          v3[2] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v10 + 1)];
          v3[3] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v11];
          v3 += 4;
          v7 = (unsigned int)(v11 + 1);
          goto LABEL_21;
        }
LABEL_15:
        *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v9];
        goto LABEL_16;
      }
    }
    else
    {
      *a2 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v8];
      v3 = a2 + 1;
    }
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v8 + 1)];
    goto LABEL_15;
  }
  v12 = (unsigned int)this / 0x5F5E100;
  v13 = (unsigned int)this % 0x5F5E100;
  if ( (unsigned int)this / 0x5F5E100 < 0xA )
  {
    *v3 = v12 + 48;
    v15 = v3 + 1;
  }
  else
  {
    v14 = 2 * v12;
    *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v14];
    v3[1] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v14 + 1)];
    v15 = v3 + 2;
  }
  v16 = v13 / 0x2710;
  v17 = v13 % 0x2710;
  v18 = 2 * (v16 / 0x64);
  v19 = 2 * (v16 % 0x64);
  v20 = 2 * (v17 / 0x64);
  *v15 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v18];
  v21 = 2 * (v17 % 0x64);
  v15[1] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v18 + 1)];
  v15[2] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v19];
  v15[3] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v19 + 1)];
  v15[4] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v20];
  v15[5] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v20 + 1)];
  v15[6] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v21];
  v3 = v15 + 7;
  v7 = (unsigned int)(v21 + 1);
LABEL_21:
  *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v7];
  return v3 + 1;
}
