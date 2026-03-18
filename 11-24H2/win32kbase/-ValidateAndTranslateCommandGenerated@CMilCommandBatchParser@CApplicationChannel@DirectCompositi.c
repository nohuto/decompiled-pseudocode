/*
 * XREFs of ?ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x140081EA0
 * Callers:
 *     ?ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJXZ @ 0x140081BFC (-ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJ.c)
 * Callees:
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14007FB30 (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 *     ?TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14010BF60 (-TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectCompositio.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandGenerated(
        DirectComposition::CApplicationChannel **this,
        unsigned int *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  bool v7; // cf
  unsigned int *v8; // rdx
  char v9; // r9
  int v10; // r8d
  bool v11; // zf
  int v13; // r8d
  int v14; // r8d
  unsigned __int64 v15; // rcx
  unsigned int *v16; // rsi
  char *v17; // rbx
  unsigned int *v18; // rax
  unsigned int *v19; // rdx
  bool v20; // zf
  bool v21; // zf
  bool v22; // zf
  int v23; // r8d
  bool v24; // zf
  bool v25; // zf
  bool v26; // zf
  bool v27; // zf
  bool v28; // zf
  bool v29; // zf
  bool v30; // zf
  bool v31; // zf
  int v32; // r8d
  bool v33; // zf
  bool v34; // zf
  bool v35; // zf
  bool v36; // zf
  int v37; // r8d
  unsigned __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // r8
  char *v41; // rdx
  bool v42; // zf
  int v43; // r8d
  bool v44; // zf
  int v45; // r8d
  bool v46; // cf
  bool v47; // cf
  int v48; // r8d
  int v49; // r8d
  bool v50; // zf
  bool v51; // zf
  bool v52; // zf
  bool v53; // zf
  int v54; // r8d
  bool v55; // zf
  bool v56; // zf
  bool v57; // zf
  bool v58; // zf
  bool v59; // zf
  bool v60; // zf
  bool v61; // cf
  bool v62; // zf
  int v63; // r8d
  bool v64; // cf
  bool v65; // zf
  int v66; // r8d
  bool v67; // zf
  bool v68; // zf
  int v69; // r8d
  int v70; // r8d
  bool v71; // zf
  bool v72; // zf
  bool v73; // zf
  bool v74; // zf
  bool v75; // zf
  bool v76; // zf
  int v77; // r8d
  int v78; // r8d
  bool v79; // zf
  bool v80; // zf
  bool v81; // zf
  bool v82; // zf
  bool v83; // zf
  bool v84; // zf
  bool v85; // zf
  int v86; // r8d
  bool v87; // zf
  int v88; // r8d
  bool v89; // zf
  bool v90; // zf
  bool v91; // zf
  bool v92; // zf
  bool v93; // zf
  int v94; // r8d
  bool v95; // zf
  bool v96; // zf
  bool v97; // zf
  int v98; // [rsp+20h] [rbp-10h]
  int v99; // [rsp+20h] [rbp-10h]
  int v100; // [rsp+20h] [rbp-10h]
  unsigned int v101; // [rsp+58h] [rbp+28h] BYREF

  v3 = 0;
  v4 = a3;
  v101 = 0;
  switch ( *a2 )
  {
    case 1u:
      v7 = a3 < 0xC;
      goto LABEL_3;
    case 2u:
      v7 = a3 < 0x10;
LABEL_3:
      if ( !v7 )
        goto LABEL_4;
      goto LABEL_11;
    case 3u:
    case 6u:
      v11 = a3 == 12;
      goto LABEL_10;
    case 4u:
    case 8u:
      v11 = a3 == 16;
      goto LABEL_10;
    case 5u:
      if ( a3 != 60 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        2,
        0,
        &v101);
      v8 = a2 + 6;
      v9 = 1;
      goto LABEL_5;
    case 7u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        2,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_18;
    case 9u:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 2;
      goto LABEL_21;
    case 0xAu:
    case 0xBu:
      v11 = a3 == 28;
LABEL_10:
      if ( !v11 )
        goto LABEL_11;
LABEL_4:
      v8 = a2 + 1;
      v9 = 0;
LABEL_5:
      v10 = 2;
      goto LABEL_6;
    case 0xCu:
    case 0xDu:
      if ( a3 != 20 )
        goto LABEL_11;
      v14 = 10;
      goto LABEL_27;
    case 0xEu:
      if ( a3 < 0x14 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        11,
        0,
        &v101);
      v15 = a2[3];
      if ( v15 > v4 - 20 )
        goto LABEL_11;
      v16 = a2 + 4;
      v17 = (char *)&v16[v15 >> 2];
      if ( v16 < (unsigned int *)v17 )
      {
        v18 = v16;
        do
        {
          v19 = v16;
          v16 = v18 + 1;
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            v19,
            60,
            0,
            &v101);
          v18 = v16;
        }
        while ( v16 < (unsigned int *)v17 );
      }
      goto LABEL_7;
    case 0xFu:
    case 0x12u:
      v20 = a3 == 16;
      goto LABEL_37;
    case 0x10u:
      v20 = a3 == 12;
      goto LABEL_37;
    case 0x11u:
      v20 = a3 == 44;
LABEL_37:
      if ( !v20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_39;
    case 0x13u:
      if ( a3 >= 0x14 )
        goto LABEL_43;
      goto LABEL_11;
    case 0x14u:
      if ( a3 != 20 )
        goto LABEL_11;
LABEL_43:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 13;
      goto LABEL_6;
    case 0x15u:
      v21 = a3 == 12;
      goto LABEL_47;
    case 0x16u:
      v21 = a3 == 28;
LABEL_47:
      if ( !v21 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 18;
      goto LABEL_6;
    case 0x17u:
      if ( a3 != 68 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        18,
        0,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 8,
        128,
        1,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 9,
        160,
        1,
        &v101);
      v8 = a2 + 10;
      goto LABEL_52;
    case 0x18u:
      v22 = a3 == 12;
      goto LABEL_55;
    case 0x19u:
    case 0x1Du:
    case 0x22u:
      v22 = a3 == 20;
      goto LABEL_55;
    case 0x1Au:
      if ( a3 >= 0x10 )
        goto LABEL_56;
      goto LABEL_11;
    case 0x1Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        20,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_62;
    case 0x1Cu:
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
    case 0x21u:
      v22 = a3 == 16;
LABEL_55:
      if ( !v22 )
        goto LABEL_11;
LABEL_56:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 20;
      goto LABEL_6;
    case 0x23u:
      if ( a3 != 16 )
        goto LABEL_11;
      v23 = 20;
      goto LABEL_66;
    case 0x24u:
    case 0x2Eu:
    case 0x2Fu:
    case 0x108u:
      v24 = a3 == 8;
      goto LABEL_68;
    case 0x25u:
    case 0x113u:
    case 0x114u:
      v24 = a3 == 16;
      goto LABEL_68;
    case 0x26u:
      v25 = a3 == 16;
      goto LABEL_72;
    case 0x27u:
      v25 = a3 == 12;
LABEL_72:
      if ( !v25 )
        goto LABEL_11;
      v8 = a2 + 1;
      goto LABEL_28;
    case 0x28u:
    case 0x110u:
    case 0x111u:
    case 0x112u:
      v26 = a3 == 16;
      goto LABEL_76;
    case 0x29u:
      v26 = a3 == 12;
      goto LABEL_76;
    case 0x2Au:
    case 0x103u:
    case 0x106u:
    case 0x10Du:
    case 0x10Eu:
    case 0x116u:
      v24 = a3 == 12;
      goto LABEL_68;
    case 0x2Bu:
    case 0x2Du:
    case 0x109u:
      if ( a3 < 0xC )
        goto LABEL_11;
      return v3;
    case 0x2Cu:
    case 0x10Au:
    case 0x115u:
      v24 = a3 == 28;
      goto LABEL_68;
    case 0x30u:
      if ( a3 != 52 )
        goto LABEL_11;
      v8 = a2 + 10;
      goto LABEL_52;
    case 0x31u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_87;
    case 0x32u:
      v27 = a3 == 28;
      goto LABEL_89;
    case 0x33u:
      v27 = a3 == 16;
LABEL_89:
      if ( !v27 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 23;
      goto LABEL_6;
    case 0x34u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 25;
      v9 = 0;
      goto LABEL_6;
    case 0x35u:
      if ( a3 != 112 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_96;
    case 0x36u:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 28;
      goto LABEL_21;
    case 0x37u:
    case 0x38u:
    case 0x39u:
    case 0x3Bu:
      v28 = a3 == 20;
      goto LABEL_100;
    case 0x3Au:
      v28 = a3 == 16;
      goto LABEL_100;
    case 0x3Cu:
      v28 = a3 == 36;
LABEL_100:
      if ( !v28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_102;
    case 0x3Du:
      v29 = a3 == 20;
      goto LABEL_106;
    case 0x3Eu:
    case 0x3Fu:
    case 0x42u:
    case 0x43u:
      v29 = a3 == 24;
      goto LABEL_106;
    case 0x40u:
      v29 = a3 == 28;
      goto LABEL_106;
    case 0x41u:
      v29 = a3 == 16;
      goto LABEL_106;
    case 0x44u:
      v29 = a3 == 76;
LABEL_106:
      if ( !v29 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_108;
    case 0x45u:
      v30 = a3 == 28;
      goto LABEL_114;
    case 0x46u:
      v30 = a3 == 16;
LABEL_114:
      if ( !v30 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 32;
      goto LABEL_6;
    case 0x47u:
      v31 = a3 == 28;
      goto LABEL_118;
    case 0x48u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 33;
      goto LABEL_122;
    case 0x49u:
      v31 = a3 == 24;
      goto LABEL_118;
    case 0x4Au:
      v31 = a3 == 16;
LABEL_118:
      if ( !v31 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 33;
      goto LABEL_6;
    case 0x4Bu:
    case 0x4Cu:
      if ( a3 >= 0x10 )
        goto LABEL_126;
      goto LABEL_11;
    case 0x4Du:
    case 0x4Eu:
      v33 = a3 == 12;
      goto LABEL_129;
    case 0x4Fu:
      v33 = a3 == 16;
LABEL_129:
      if ( !v33 )
        goto LABEL_11;
LABEL_126:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_127;
    case 0x50u:
      v34 = a3 == 12;
      goto LABEL_133;
    case 0x51u:
      v34 = a3 == 92;
      goto LABEL_133;
    case 0x52u:
      v34 = a3 == 20;
      goto LABEL_133;
    case 0x53u:
    case 0x54u:
    case 0x55u:
    case 0x56u:
      v34 = a3 == 16;
LABEL_133:
      if ( !v34 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 37;
      goto LABEL_6;
    case 0x57u:
      if ( a3 == 32 )
        goto LABEL_139;
      goto LABEL_11;
    case 0x58u:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_139:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 38;
      goto LABEL_6;
    case 0x59u:
    case 0x5Au:
    case 0x5Bu:
    case 0x5Eu:
    case 0x5Fu:
    case 0x60u:
      v35 = a3 == 16;
      goto LABEL_143;
    case 0x5Cu:
      v35 = a3 == 28;
      goto LABEL_143;
    case 0x5Du:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 39;
      goto LABEL_122;
    case 0x61u:
      v35 = a3 == 24;
LABEL_143:
      if ( !v35 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 39;
      goto LABEL_6;
    case 0x62u:
    case 0x63u:
    case 0x64u:
    case 0x67u:
    case 0x69u:
    case 0x6Au:
    case 0x6Bu:
    case 0x6Du:
    case 0x6Fu:
      v36 = a3 == 16;
      goto LABEL_150;
    case 0x65u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 41;
      goto LABEL_122;
    case 0x66u:
    case 0x6Cu:
      v36 = a3 == 24;
      goto LABEL_150;
    case 0x68u:
    case 0x6Eu:
      v36 = a3 == 28;
LABEL_150:
      if ( !v36 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 41;
      goto LABEL_6;
    case 0x70u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_158;
    case 0x71u:
      if ( a3 >= 0x10 )
        goto LABEL_160;
      goto LABEL_11;
    case 0x72u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        45,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_164;
    case 0x73u:
      if ( a3 != 16 )
        goto LABEL_11;
LABEL_160:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_161;
    case 0x74u:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v37 = 46;
      goto LABEL_169;
    case 0x75u:
    case 0x1C6u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_175;
    case 0x76u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 51;
      v9 = 0;
      goto LABEL_6;
    case 0x77u:
      v42 = a3 == 60;
      goto LABEL_179;
    case 0x78u:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 52;
      goto LABEL_183;
    case 0x79u:
      v42 = a3 == 16;
      goto LABEL_179;
    case 0x7Au:
      v42 = a3 == 68;
LABEL_179:
      if ( !v42 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 52;
      goto LABEL_6;
    case 0x7Bu:
    case 0x7Fu:
    case 0x80u:
      v44 = a3 == 16;
      goto LABEL_188;
    case 0x7Cu:
      v44 = a3 == 28;
      goto LABEL_188;
    case 0x7Du:
      if ( a3 != 16 )
        goto LABEL_11;
      v45 = 55;
      goto LABEL_194;
    case 0x7Eu:
      v44 = a3 == 24;
LABEL_188:
      if ( !v44 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_190;
    case 0x81u:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        57,
        0,
        &v101);
      v8 = a2 + 3;
      goto LABEL_195;
    case 0x82u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        57,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_201;
    case 0x83u:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        57,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 28;
      goto LABEL_6;
    case 0x84u:
    case 0x85u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 59;
      v9 = 0;
      goto LABEL_6;
    case 0x86u:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 60;
      goto LABEL_21;
    case 0x87u:
      v46 = a3 < 0x10;
      goto LABEL_209;
    case 0x88u:
    case 0x89u:
      v46 = a3 < 0x14;
LABEL_209:
      if ( v46 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_164:
      v10 = 60;
      goto LABEL_6;
    case 0x8Au:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 61;
      goto LABEL_6;
    case 0x8Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_216;
    case 0x8Cu:
      v47 = a3 < 0xC;
      goto LABEL_218;
    case 0x8Du:
      if ( a3 == 52 )
        goto LABEL_219;
      goto LABEL_11;
    case 0x8Eu:
      v47 = a3 < 0x1C;
LABEL_218:
      if ( v47 )
        goto LABEL_11;
LABEL_219:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 66;
      goto LABEL_6;
    case 0x8Fu:
      if ( a3 != 28 )
        goto LABEL_11;
      v48 = 66;
      goto LABEL_225;
    case 0x90u:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        66,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_175:
      v10 = 48;
      goto LABEL_6;
    case 0x91u:
      if ( a3 != 16 )
        goto LABEL_11;
      v49 = 67;
      goto LABEL_231;
    case 0x92u:
    case 0x93u:
    case 0x94u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_234;
    case 0x95u:
      if ( a3 < 0x14 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        73,
        0,
        &v101);
      v38 = a2[3];
      if ( v38 > v4 - 20 )
        goto LABEL_11;
      v39 = 23LL;
      goto LABEL_171;
    case 0x96u:
    case 0x97u:
    case 0x98u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 73;
      v9 = 0;
      goto LABEL_6;
    case 0x99u:
      if ( a3 != 16 )
        goto LABEL_11;
      v49 = 73;
      goto LABEL_231;
    case 0x9Au:
      v50 = a3 == 32;
      goto LABEL_243;
    case 0x9Bu:
      v50 = a3 == 16;
LABEL_243:
      if ( !v50 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 75;
      goto LABEL_6;
    case 0x9Cu:
      v51 = a3 == 36;
      goto LABEL_247;
    case 0x9Du:
    case 0x9Eu:
      v51 = a3 == 16;
LABEL_247:
      if ( !v51 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 76;
      goto LABEL_6;
    case 0x9Fu:
      v52 = a3 == 20;
      goto LABEL_251;
    case 0xA0u:
      v52 = a3 == 16;
LABEL_251:
      if ( !v52 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 77;
      goto LABEL_6;
    case 0xA1u:
      v53 = a3 == 28;
      goto LABEL_255;
    case 0xA2u:
      if ( a3 != 16 )
        goto LABEL_11;
      v54 = 78;
      goto LABEL_259;
    case 0xA3u:
      v53 = a3 == 36;
LABEL_255:
      if ( !v53 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 78;
      goto LABEL_6;
    case 0xA4u:
      v55 = a3 == 24;
      goto LABEL_263;
    case 0xA5u:
      v55 = a3 == 16;
      goto LABEL_263;
    case 0xA6u:
      v55 = a3 == 28;
LABEL_263:
      if ( !v55 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 80;
      goto LABEL_6;
    case 0xA7u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 80;
      goto LABEL_122;
    case 0xA8u:
      v56 = a3 == 68;
      goto LABEL_270;
    case 0xA9u:
      v56 = a3 == 16;
      goto LABEL_270;
    case 0xAAu:
      v56 = a3 == 20;
LABEL_270:
      if ( !v56 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 81;
      goto LABEL_6;
    case 0xABu:
      if ( a3 != 36 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        86,
        0,
        &v101);
      v8 = a2 + 6;
      goto LABEL_52;
    case 0xACu:
      v57 = a3 == 12;
      goto LABEL_277;
    case 0xADu:
      v57 = a3 == 28;
LABEL_277:
      if ( !v57 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 86;
      goto LABEL_6;
    case 0xAEu:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 87;
      goto LABEL_21;
    case 0xAFu:
      v58 = a3 == 56;
      goto LABEL_283;
    case 0xB0u:
      v58 = a3 == 16;
      goto LABEL_283;
    case 0xB1u:
      v58 = a3 == 52;
      goto LABEL_283;
    case 0xB2u:
      v58 = a3 == 24;
LABEL_283:
      if ( !v58 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 88;
      goto LABEL_6;
    case 0xB3u:
      v59 = a3 == 28;
      goto LABEL_289;
    case 0xB4u:
    case 0xB5u:
    case 0xB9u:
    case 0xBCu:
      v59 = a3 == 16;
      goto LABEL_289;
    case 0xB6u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        89,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 82;
      goto LABEL_6;
    case 0xB7u:
      v59 = a3 == 20;
      goto LABEL_289;
    case 0xB8u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        89,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_298;
    case 0xBAu:
      if ( a3 >= 0x18 )
        goto LABEL_290;
      goto LABEL_11;
    case 0xBBu:
      v59 = a3 == 24;
LABEL_289:
      if ( !v59 )
        goto LABEL_11;
LABEL_290:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_291;
    case 0xBDu:
    case 0xC5u:
      v60 = a3 == 24;
      goto LABEL_303;
    case 0xBEu:
    case 0xC8u:
      v61 = a3 < 0x10;
      goto LABEL_307;
    case 0xBFu:
    case 0xC1u:
      v60 = a3 == 28;
      goto LABEL_303;
    case 0xC0u:
      v60 = a3 == 12;
      goto LABEL_303;
    case 0xC2u:
    case 0xCAu:
    case 0xCCu:
      v60 = a3 == 16;
      goto LABEL_303;
    case 0xC3u:
    case 0xC4u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        90,
        0,
        &v101);
      v8 = a2 + 2;
      goto LABEL_314;
    case 0xC6u:
      if ( a3 < 0x18 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        90,
        0,
        &v101);
      v8 = a2 + 3;
      goto LABEL_314;
    case 0xC7u:
      v61 = a3 < 0xC;
LABEL_307:
      if ( !v61 )
        goto LABEL_304;
      goto LABEL_11;
    case 0xC9u:
    case 0xCBu:
      v60 = a3 == 20;
      goto LABEL_303;
    case 0xCDu:
    case 0xD0u:
      v60 = a3 == 32;
      goto LABEL_303;
    case 0xCEu:
      v60 = a3 == 36;
LABEL_303:
      if ( !v60 )
        goto LABEL_11;
LABEL_304:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_305;
    case 0xCFu:
      v62 = a3 == 28;
      goto LABEL_322;
    case 0xD1u:
      v62 = a3 == 36;
LABEL_322:
      if ( !v62 )
        goto LABEL_11;
      v63 = 90;
      goto LABEL_324;
    case 0xD2u:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        91,
        0,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        90,
        1,
        &v101);
      v8 = a2 + 3;
      v9 = 1;
LABEL_305:
      v10 = 90;
      goto LABEL_6;
    case 0xD3u:
      v64 = a3 < 0x10;
      goto LABEL_329;
    case 0xD4u:
      if ( a3 != 72 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        92,
        0,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        157,
        1,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 11,
        2,
        1,
        &v101);
      v8 = a2 + 12;
      goto LABEL_22;
    case 0xD5u:
      v64 = a3 < 0x14;
LABEL_329:
      if ( !v64 )
        goto LABEL_330;
      goto LABEL_11;
    case 0xD6u:
    case 0xD7u:
    case 0xD8u:
      v65 = a3 == 16;
      goto LABEL_335;
    case 0xD9u:
    case 0xDAu:
      v65 = a3 == 36;
LABEL_335:
      if ( !v65 )
        goto LABEL_11;
LABEL_330:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 92;
      goto LABEL_6;
    case 0xDBu:
    case 0xDDu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 93;
      v9 = 0;
      goto LABEL_6;
    case 0xDCu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        93,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 57;
      goto LABEL_6;
    case 0xDEu:
      if ( a3 != 16 )
        goto LABEL_11;
      v66 = 93;
      goto LABEL_344;
    case 0xDFu:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_18:
      v10 = 94;
      goto LABEL_6;
    case 0xE0u:
      v67 = a3 == 36;
      goto LABEL_348;
    case 0xE1u:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 96;
      goto LABEL_183;
    case 0xE2u:
      v67 = a3 == 16;
      goto LABEL_348;
    case 0xE3u:
      v67 = a3 == 68;
LABEL_348:
      if ( !v67 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 96;
      goto LABEL_6;
    case 0xE4u:
      if ( a3 != 52 )
        goto LABEL_11;
      v32 = 98;
      goto LABEL_122;
    case 0xE5u:
    case 0xE6u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 99;
      v9 = 0;
      goto LABEL_6;
    case 0xE7u:
    case 0xE8u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 102;
      v9 = 0;
      goto LABEL_6;
    case 0xE9u:
      v68 = a3 == 76;
      goto LABEL_361;
    case 0xEAu:
      v68 = a3 == 228;
      goto LABEL_361;
    case 0xEBu:
      if ( a3 != 16 )
        goto LABEL_11;
      v69 = 104;
      goto LABEL_366;
    case 0xECu:
      if ( a3 != 16 )
        goto LABEL_11;
      v23 = 104;
LABEL_66:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v23,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 187;
      goto LABEL_6;
    case 0xEDu:
      v68 = a3 == 16;
      goto LABEL_361;
    case 0xEEu:
      if ( a3 != 16 )
        goto LABEL_11;
      v70 = 104;
      goto LABEL_372;
    case 0xEFu:
      v68 = a3 == 220;
LABEL_361:
      if ( !v68 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 104;
      goto LABEL_6;
    case 0xF0u:
      if ( a3 >= 0xC )
        goto LABEL_375;
      goto LABEL_11;
    case 0xF1u:
      if ( a3 != 32 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        105,
        0,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        45,
        1,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        45,
        1,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 4,
        45,
        1,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 5,
        45,
        1,
        &v101);
      v8 = a2 + 6;
LABEL_314:
      v9 = 1;
LABEL_161:
      v10 = 45;
      goto LABEL_6;
    case 0xF2u:
      v71 = a3 == 148;
      goto LABEL_379;
    case 0xF3u:
      v71 = a3 == 32;
LABEL_379:
      if ( !v71 )
        goto LABEL_11;
LABEL_375:
      v8 = a2 + 1;
      v9 = 0;
LABEL_298:
      v10 = 105;
      goto LABEL_6;
    case 0xF4u:
      v72 = a3 == 60;
      goto LABEL_383;
    case 0xF5u:
      v72 = a3 == 16;
      goto LABEL_383;
    case 0xF6u:
    case 0xF7u:
      if ( a3 != 16 )
        goto LABEL_11;
      v45 = 107;
      goto LABEL_194;
    case 0xF8u:
      if ( a3 != 36 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 108;
      v9 = 0;
      goto LABEL_6;
    case 0xF9u:
    case 0xFEu:
      v73 = a3 == 20;
      goto LABEL_391;
    case 0xFAu:
      v73 = a3 == 44;
      goto LABEL_391;
    case 0xFBu:
    case 0xFCu:
    case 0xFDu:
      v73 = a3 == 24;
LABEL_391:
      if ( !v73 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 112;
      goto LABEL_6;
    case 0xFFu:
      v74 = a3 == 20;
      goto LABEL_396;
    case 0x100u:
      v74 = a3 == 16;
LABEL_396:
      if ( !v74 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 113;
      goto LABEL_6;
    case 0x101u:
      if ( a3 != 16 )
        goto LABEL_11;
      v45 = 113;
      goto LABEL_194;
    case 0x102u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 114;
      v9 = 0;
      goto LABEL_6;
    case 0x104u:
      v24 = a3 == 128;
      goto LABEL_68;
    case 0x105u:
      v24 = a3 == 44;
      goto LABEL_68;
    case 0x107u:
      v24 = a3 == 60;
      goto LABEL_68;
    case 0x10Bu:
      v24 = a3 == 32;
      goto LABEL_68;
    case 0x10Cu:
      v24 = a3 == 36;
      goto LABEL_68;
    case 0x10Fu:
      v24 = a3 == 156;
      goto LABEL_68;
    case 0x117u:
      v24 = a3 == 24;
LABEL_68:
      if ( !v24 )
        goto LABEL_11;
      return v3;
    case 0x118u:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 115;
      goto LABEL_21;
    case 0x119u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 116;
      v9 = 0;
      goto LABEL_6;
    case 0x11Au:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 117;
      v9 = 0;
      goto LABEL_6;
    case 0x11Bu:
    case 0x11Du:
    case 0x121u:
      if ( a3 >= 0x10 )
        goto LABEL_417;
      goto LABEL_11;
    case 0x11Cu:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 118;
      goto LABEL_21;
    case 0x11Eu:
    case 0x11Fu:
      v75 = a3 == 12;
      goto LABEL_421;
    case 0x120u:
      v75 = a3 == 28;
LABEL_421:
      if ( !v75 )
        goto LABEL_11;
LABEL_417:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 118;
      goto LABEL_6;
    case 0x122u:
    case 0x124u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 120;
      goto LABEL_122;
    case 0x123u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        120,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_87:
      v10 = 22;
      goto LABEL_6;
    case 0x125u:
      if ( a3 != 16 )
        goto LABEL_11;
      v45 = 120;
      goto LABEL_194;
    case 0x126u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 121;
      v9 = 0;
      goto LABEL_6;
    case 0x127u:
      if ( a3 != 16 )
        goto LABEL_11;
      v45 = 121;
      goto LABEL_194;
    case 0x128u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 121;
      goto LABEL_122;
    case 0x129u:
    case 0x12Au:
      if ( a3 >= 0x10 )
        goto LABEL_437;
      goto LABEL_11;
    case 0x12Bu:
    case 0x12Cu:
      v76 = a3 == 12;
      goto LABEL_439;
    case 0x12Du:
    case 0x12Fu:
    case 0x130u:
    case 0x131u:
    case 0x132u:
    case 0x133u:
      v76 = a3 == 16;
LABEL_439:
      if ( !v76 )
        goto LABEL_11;
LABEL_437:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 122;
      goto LABEL_6;
    case 0x12Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        122,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_127:
      v10 = 36;
      goto LABEL_6;
    case 0x134u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 123;
      v9 = 0;
      goto LABEL_6;
    case 0x135u:
      if ( a3 >= 0x1C )
        goto LABEL_447;
      goto LABEL_11;
    case 0x136u:
      if ( a3 != 16 )
        goto LABEL_11;
LABEL_447:
      v8 = a2 + 1;
      v9 = 0;
LABEL_201:
      v10 = 124;
      goto LABEL_6;
    case 0x137u:
      if ( a3 != 16 )
        goto LABEL_11;
      v77 = 125;
      goto LABEL_452;
    case 0x138u:
      if ( a3 != 16 )
        goto LABEL_11;
      v78 = 125;
      goto LABEL_456;
    case 0x139u:
    case 0x13Au:
    case 0x13Bu:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 126;
      v9 = 0;
      goto LABEL_6;
    case 0x13Cu:
    case 0x13Du:
    case 0x140u:
    case 0x142u:
      v79 = a3 == 16;
      goto LABEL_461;
    case 0x13Eu:
    case 0x141u:
      v79 = a3 == 20;
      goto LABEL_461;
    case 0x13Fu:
      v79 = a3 == 48;
LABEL_461:
      if ( !v79 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 127;
      goto LABEL_6;
    case 0x143u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_467;
    case 0x144u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 129;
      goto LABEL_122;
    case 0x145u:
    case 0x149u:
    case 0x14Au:
      v80 = a3 == 20;
      goto LABEL_471;
    case 0x146u:
      v80 = a3 == 12;
      goto LABEL_471;
    case 0x147u:
    case 0x14Bu:
      v80 = a3 == 16;
      goto LABEL_471;
    case 0x148u:
      v80 = a3 == 28;
LABEL_471:
      if ( !v80 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 131;
      v9 = 0;
      goto LABEL_6;
    case 0x14Cu:
      v81 = a3 == 20;
      goto LABEL_477;
    case 0x14Du:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 132;
LABEL_183:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v43,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_184;
    case 0x14Eu:
      v81 = a3 == 36;
LABEL_477:
      if ( !v81 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 132;
      v9 = 0;
      goto LABEL_6;
    case 0x14Fu:
      if ( a3 < 0x10 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 133;
      v9 = 0;
      goto LABEL_6;
    case 0x150u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 134;
      goto LABEL_122;
    case 0x151u:
      if ( a3 != 12 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 134;
      v9 = 0;
      goto LABEL_6;
    case 0x152u:
      v26 = a3 == 20;
      goto LABEL_76;
    case 0x153u:
    case 0x154u:
      v26 = a3 == 28;
LABEL_76:
      if ( !v26 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_29;
    case 0x155u:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        135,
        0,
        &v101);
      v8 = a2 + 3;
      goto LABEL_28;
    case 0x156u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 139;
      v9 = 0;
      goto LABEL_6;
    case 0x157u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        146,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 143;
      goto LABEL_6;
    case 0x158u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        146,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_498;
    case 0x159u:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 146;
      v9 = 0;
      goto LABEL_6;
    case 0x15Au:
    case 0x15Cu:
    case 0x15Du:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 153;
      v9 = 0;
      goto LABEL_6;
    case 0x15Bu:
      if ( a3 != 32 )
        goto LABEL_11;
      v14 = 153;
      goto LABEL_27;
    case 0x15Eu:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v37 = 156;
LABEL_169:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v37,
        0,
        &v101);
      v38 = a2[3];
      if ( v38 > v4 - 20 )
        goto LABEL_11;
      v39 = 181LL;
      goto LABEL_171;
    case 0x15Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v78 = 156;
LABEL_456:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v78,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_457;
    case 0x160u:
      if ( a3 >= 0x14 )
        goto LABEL_510;
      goto LABEL_11;
    case 0x161u:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 159;
LABEL_21:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v13,
        0,
        &v101);
      v8 = a2 + 2;
LABEL_22:
      v9 = 1;
      goto LABEL_23;
    case 0x162u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 160;
      v9 = 0;
      goto LABEL_6;
    case 0x163u:
      if ( a3 != 76 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 162;
      v9 = 0;
      goto LABEL_6;
    case 0x164u:
      if ( a3 != 28 )
        goto LABEL_11;
      v32 = 162;
      goto LABEL_122;
    case 0x165u:
    case 0x168u:
      if ( a3 != 16 )
        goto LABEL_11;
      v45 = 165;
      goto LABEL_194;
    case 0x166u:
      if ( a3 != 16 )
        goto LABEL_11;
      v77 = 165;
      goto LABEL_452;
    case 0x167u:
    case 0x16Au:
    case 0x16Bu:
    case 0x16Du:
      v82 = a3 == 16;
      goto LABEL_524;
    case 0x169u:
      if ( a3 >= 0x14 )
        goto LABEL_525;
      goto LABEL_11;
    case 0x16Cu:
      v82 = a3 == 28;
LABEL_524:
      if ( !v82 )
        goto LABEL_11;
LABEL_525:
      v8 = a2 + 1;
      v10 = 165;
      v9 = 0;
      goto LABEL_6;
    case 0x16Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      v45 = 166;
      goto LABEL_194;
    case 0x16Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v66 = 166;
LABEL_344:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v66,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_190:
      v10 = 55;
      goto LABEL_6;
    case 0x170u:
    case 0x171u:
    case 0x172u:
    case 0x173u:
    case 0x174u:
    case 0x177u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 169;
      v9 = 0;
      goto LABEL_6;
    case 0x175u:
      if ( a3 != 52 )
        goto LABEL_11;
      v14 = 169;
      goto LABEL_27;
    case 0x176u:
      if ( a3 != 16 )
        goto LABEL_11;
      v49 = 169;
      goto LABEL_231;
    case 0x178u:
      if ( a3 >= 0x14 )
        goto LABEL_540;
      goto LABEL_11;
    case 0x179u:
      if ( a3 != 16 )
        goto LABEL_11;
      v49 = 181;
LABEL_231:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v49,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_102:
      v10 = 29;
      goto LABEL_6;
    case 0x17Au:
    case 0x17Du:
    case 0x17Eu:
      v83 = a3 == 16;
      goto LABEL_544;
    case 0x17Bu:
    case 0x17Cu:
      v83 = a3 == 20;
LABEL_544:
      if ( !v83 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_457:
      v10 = 182;
      goto LABEL_6;
    case 0x17Fu:
      v84 = a3 == 60;
      goto LABEL_548;
    case 0x180u:
      v84 = a3 == 28;
LABEL_548:
      if ( !v84 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 183;
      v9 = 0;
      goto LABEL_6;
    case 0x181u:
    case 0x182u:
    case 0x191u:
    case 0x19Du:
      if ( a3 >= 0x10 )
        goto LABEL_552;
      goto LABEL_11;
    case 0x183u:
    case 0x187u:
      v85 = a3 == 12;
      goto LABEL_554;
    case 0x184u:
    case 0x186u:
    case 0x189u:
    case 0x192u:
    case 0x196u:
    case 0x197u:
    case 0x198u:
    case 0x199u:
    case 0x1A2u:
      v85 = a3 == 16;
      goto LABEL_554;
    case 0x185u:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        184,
        0,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        184,
        1,
        &v101);
      v8 = a2 + 3;
      goto LABEL_52;
    case 0x188u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 184;
      goto LABEL_122;
    case 0x18Au:
      if ( a3 != 16 )
        goto LABEL_11;
      v14 = 184;
LABEL_27:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v14,
        0,
        &v101);
      v8 = a2 + 2;
LABEL_28:
      v9 = 1;
LABEL_29:
      v10 = 135;
      goto LABEL_6;
    case 0x18Bu:
    case 0x18Fu:
    case 0x19Fu:
    case 0x1A4u:
      v85 = a3 == 28;
      goto LABEL_554;
    case 0x18Cu:
      if ( a3 != 16 )
        goto LABEL_11;
      v77 = 184;
      goto LABEL_452;
    case 0x18Du:
      if ( a3 != 16 )
        goto LABEL_11;
      v69 = 184;
LABEL_366:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v69,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_96:
      v10 = 26;
      goto LABEL_6;
    case 0x18Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        184,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 47;
      goto LABEL_6;
    case 0x190u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        184,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 56;
      goto LABEL_6;
    case 0x193u:
      v85 = a3 == 36;
      goto LABEL_554;
    case 0x194u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        184,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_291:
      v10 = 89;
      goto LABEL_6;
    case 0x195u:
    case 0x19Au:
      v85 = a3 == 24;
      goto LABEL_554;
    case 0x19Bu:
    case 0x19Eu:
      v85 = a3 == 20;
      goto LABEL_554;
    case 0x19Cu:
      v85 = a3 == 52;
LABEL_554:
      if ( !v85 )
        goto LABEL_11;
LABEL_552:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_53;
    case 0x1A0u:
      if ( a3 != 16 )
        goto LABEL_11;
      v86 = 184;
      goto LABEL_580;
    case 0x1A1u:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        184,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 188;
      goto LABEL_6;
    case 0x1A3u:
      if ( a3 != 16 )
        goto LABEL_11;
      v45 = 184;
      goto LABEL_194;
    case 0x1A5u:
      v87 = a3 == 12;
      goto LABEL_586;
    case 0x1A6u:
    case 0x1A7u:
    case 0x1A8u:
      v87 = a3 == 20;
      goto LABEL_586;
    case 0x1A9u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 190;
      goto LABEL_122;
    case 0x1AAu:
      v87 = a3 == 16;
LABEL_586:
      if ( !v87 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 190;
      v9 = 0;
      goto LABEL_6;
    case 0x1ABu:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        193,
        0,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        42,
        1,
        &v101);
      v8 = a2 + 3;
      goto LABEL_260;
    case 0x1BFu:
      if ( a3 != 48 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 1;
      v9 = 0;
      goto LABEL_6;
    case 0x1C0u:
      if ( a3 != 32 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 6;
      v9 = 0;
      goto LABEL_6;
    case 0x1C1u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 14;
      v9 = 0;
      goto LABEL_6;
    case 0x1C2u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 16;
      v9 = 0;
      goto LABEL_6;
    case 0x1C3u:
      if ( a3 != 100 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 24;
      v9 = 0;
      goto LABEL_6;
    case 0x1C4u:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        27,
        0,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        67,
        1,
        &v101);
      v8 = a2 + 4;
      goto LABEL_453;
    case 0x1C5u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 31;
      v9 = 0;
      goto LABEL_6;
    case 0x1C7u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 63;
      v9 = 0;
      goto LABEL_6;
    case 0x1C8u:
      if ( a3 != 24 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 64;
      v9 = 0;
      goto LABEL_6;
    case 0x1C9u:
      if ( a3 < 0x14 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        70,
        0,
        &v101);
      v38 = a2[2];
      if ( v38 > v4 - 20 )
        goto LABEL_11;
      v39 = 67LL;
LABEL_171:
      v40 = (unsigned int)v38 >> 2;
      v41 = (char *)(a2 + 4);
      goto LABEL_172;
    case 0x1CAu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 83;
      v9 = 0;
      goto LABEL_6;
    case 0x1CBu:
      if ( a3 != 60 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 101;
      v9 = 0;
      goto LABEL_6;
    case 0x1CCu:
      v72 = a3 == 12;
LABEL_383:
      if ( !v72 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 106;
      goto LABEL_6;
    case 0x1CDu:
      if ( a3 != 36 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 109;
      v9 = 0;
      goto LABEL_6;
    case 0x1CEu:
      if ( a3 != 76 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 110;
      v9 = 0;
      goto LABEL_6;
    case 0x1CFu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 138;
      v9 = 0;
      goto LABEL_6;
    case 0x1D0u:
      if ( a3 != 36 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 155;
      v9 = 0;
      goto LABEL_6;
    case 0x1D1u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_23:
      v10 = 157;
      goto LABEL_6;
    case 0x1D2u:
      if ( a3 != 28 )
        goto LABEL_11;
LABEL_510:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_226;
    case 0x1D3u:
      if ( a3 != 20 )
        goto LABEL_11;
LABEL_540:
      v8 = a2 + 1;
      v10 = 171;
      v9 = 0;
      goto LABEL_6;
    case 0x1D4u:
      if ( a3 != 52 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 180;
      v9 = 0;
      goto LABEL_6;
    case 0x1D5u:
      if ( a3 != 40 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        186,
        0,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        184,
        1,
        &v101);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        184,
        1,
        &v101);
      v8 = a2 + 4;
      goto LABEL_260;
    case 0x1D6u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 189;
      goto LABEL_122;
    case 0x1D7u:
    case 0x1D8u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        3,
        0,
        &v101);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v40 = (unsigned __int64)(v4 - 16) >> 2;
      v41 = (char *)(a2 + 3);
      v39 = 92LL;
      goto LABEL_172;
    case 0x1D9u:
    case 0x1DAu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 3;
      v9 = 0;
      goto LABEL_6;
    case 0x1DBu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 4;
      v9 = 0;
      goto LABEL_6;
    case 0x1DCu:
      if ( a3 != 16 )
        goto LABEL_11;
      v63 = 5;
LABEL_324:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v63,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_39:
      v10 = 11;
      goto LABEL_6;
    case 0x1DDu:
    case 0x1DEu:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        5,
        0,
        &v101);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v40 = (unsigned __int64)(v4 - 16) >> 2;
      v41 = (char *)(a2 + 3);
      v39 = 11LL;
      goto LABEL_172;
    case 0x1DFu:
    case 0x1E0u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 5;
      v9 = 0;
      goto LABEL_6;
    case 0x1E1u:
      if ( a3 != 16 )
        goto LABEL_11;
      v88 = 7;
      goto LABEL_656;
    case 0x1E2u:
    case 0x1E3u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        7,
        0,
        &v101);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      LOBYTE(v99) = 1;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        this,
        a2 + 3,
        (unsigned __int64)(v4 - 16) >> 2,
        8LL,
        v99,
        &v101);
      goto LABEL_7;
    case 0x1E4u:
    case 0x1E5u:
      if ( a3 == 16 )
        goto LABEL_661;
      goto LABEL_11;
    case 0x1E6u:
    case 0x1E7u:
    case 0x1E8u:
    case 0x1E9u:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_661:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 8;
      goto LABEL_6;
    case 0x1EAu:
    case 0x1F0u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 19;
      goto LABEL_122;
    case 0x1EBu:
    case 0x1EEu:
    case 0x1EFu:
    case 0x1F4u:
      v89 = a3 == 16;
      goto LABEL_667;
    case 0x1ECu:
    case 0x1F3u:
      v89 = a3 == 20;
LABEL_667:
      if ( v89 )
        goto LABEL_668;
      goto LABEL_11;
    case 0x1EDu:
      if ( a3 != 16 )
        goto LABEL_11;
      v86 = 19;
      goto LABEL_580;
    case 0x1F1u:
    case 0x1F2u:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_668:
      v8 = a2 + 1;
      v9 = 0;
LABEL_62:
      v10 = 19;
      goto LABEL_6;
    case 0x1F5u:
    case 0x1F6u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 34;
      goto LABEL_6;
    case 0x1F7u:
      if ( a3 != 16 )
        goto LABEL_11;
      v54 = 34;
      goto LABEL_259;
    case 0x1F8u:
    case 0x1F9u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 35;
      v9 = 0;
      goto LABEL_6;
    case 0x1FAu:
    case 0x1FBu:
    case 0x1FCu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 43;
      v9 = 0;
      goto LABEL_6;
    case 0x1FDu:
    case 0x1FEu:
      v90 = a3 == 20;
      goto LABEL_683;
    case 0x1FFu:
    case 0x200u:
      v90 = a3 == 16;
LABEL_683:
      if ( !v90 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 50;
      goto LABEL_6;
    case 0x201u:
      v91 = a3 == 28;
      goto LABEL_687;
    case 0x202u:
      v91 = a3 == 20;
LABEL_687:
      if ( !v91 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 53;
      goto LABEL_6;
    case 0x203u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_184:
      v10 = 54;
      goto LABEL_6;
    case 0x204u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 54;
      goto LABEL_122;
    case 0x205u:
    case 0x206u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 58;
      v9 = 0;
      goto LABEL_6;
    case 0x207u:
      if ( a3 != 16 )
        goto LABEL_11;
      v86 = 58;
LABEL_580:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v86,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 175;
      goto LABEL_6;
    case 0x208u:
    case 0x209u:
      if ( a3 >= 0x10 )
        goto LABEL_699;
      goto LABEL_11;
    case 0x20Au:
    case 0x20Bu:
      v92 = a3 == 16;
      goto LABEL_702;
    case 0x20Cu:
      v92 = a3 == 20;
      goto LABEL_702;
    case 0x20Du:
      v92 = a3 == 28;
LABEL_702:
      if ( !v92 )
        goto LABEL_11;
LABEL_699:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_700;
    case 0x20Eu:
    case 0x20Fu:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        69,
        0,
        &v101);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      LOBYTE(v100) = 1;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        this,
        a2 + 3,
        (unsigned __int64)(v4 - 16) >> 2,
        68LL,
        v100,
        &v101);
      goto LABEL_7;
    case 0x214u:
    case 0x215u:
    case 0x216u:
      if ( a3 == 16 )
        goto LABEL_710;
      goto LABEL_11;
    case 0x217u:
    case 0x218u:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_710:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 74;
      goto LABEL_6;
    case 0x219u:
    case 0x21Au:
    case 0x21Fu:
    case 0x220u:
    case 0x221u:
    case 0x222u:
    case 0x223u:
    case 0x224u:
    case 0x225u:
      v93 = a3 == 16;
      goto LABEL_714;
    case 0x21Bu:
    case 0x21Du:
      v93 = a3 == 28;
LABEL_714:
      if ( !v93 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 84;
      goto LABEL_6;
    case 0x21Cu:
    case 0x21Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        84,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_467:
      v10 = 128;
      goto LABEL_6;
    case 0x226u:
      if ( a3 != 16 )
        goto LABEL_11;
      v88 = 84;
LABEL_656:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v88,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 85;
      goto LABEL_6;
    case 0x227u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 95;
      v9 = 0;
      goto LABEL_6;
    case 0x228u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        95,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_216:
      v10 = 62;
      goto LABEL_6;
    case 0x229u:
    case 0x22Au:
      if ( a3 != 16 )
        goto LABEL_11;
      v70 = 95;
LABEL_372:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v70,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 174;
      goto LABEL_6;
    case 0x22Bu:
    case 0x22Cu:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 100;
      v9 = 0;
      goto LABEL_6;
    case 0x22Du:
      if ( a3 == 16 )
        goto LABEL_730;
      goto LABEL_11;
    case 0x22Eu:
    case 0x22Fu:
    case 0x230u:
    case 0x231u:
    case 0x232u:
    case 0x233u:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_730:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 111;
      goto LABEL_6;
    case 0x234u:
    case 0x235u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_735;
    case 0x236u:
    case 0x237u:
    case 0x238u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 136;
      v9 = 0;
      goto LABEL_6;
    case 0x239u:
    case 0x23Au:
    case 0x23Bu:
    case 0x23Cu:
    case 0x23Du:
    case 0x23Eu:
    case 0x23Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 137;
      v9 = 0;
      goto LABEL_6;
    case 0x240u:
    case 0x241u:
    case 0x242u:
    case 0x243u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 140;
      v9 = 0;
      goto LABEL_6;
    case 0x244u:
    case 0x245u:
    case 0x246u:
    case 0x247u:
    case 0x248u:
    case 0x249u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 141;
      v9 = 0;
      goto LABEL_6;
    case 0x24Au:
    case 0x252u:
    case 0x253u:
    case 0x254u:
    case 0x255u:
    case 0x256u:
    case 0x257u:
    case 0x258u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_498:
      v10 = 145;
      goto LABEL_6;
    case 0x24Bu:
    case 0x24Cu:
    case 0x24Du:
    case 0x24Eu:
    case 0x24Fu:
    case 0x250u:
    case 0x251u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        145,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 159;
      goto LABEL_6;
    case 0x259u:
    case 0x25Cu:
      if ( a3 != 16 )
        goto LABEL_11;
      v94 = 147;
      goto LABEL_750;
    case 0x25Au:
      v95 = a3 == 28;
      goto LABEL_752;
    case 0x25Bu:
    case 0x25Du:
      v95 = a3 == 16;
LABEL_752:
      if ( !v95 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 147;
      v9 = 0;
      goto LABEL_6;
    case 0x25Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        148,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_108:
      v10 = 30;
      goto LABEL_6;
    case 0x25Fu:
    case 0x260u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        149,
        0,
        &v101);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v40 = (unsigned __int64)(v4 - 16) >> 2;
      v41 = (char *)(a2 + 3);
      v39 = 149LL;
      goto LABEL_172;
    case 0x261u:
    case 0x262u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        149,
        0,
        &v101);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v40 = (unsigned __int64)(v4 - 16) >> 2;
      v41 = (char *)(a2 + 3);
      v39 = 142LL;
      goto LABEL_172;
    case 0x263u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        149,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 148;
      goto LABEL_6;
    case 0x264u:
    case 0x265u:
    case 0x268u:
    case 0x26Au:
    case 0x26Cu:
      v96 = a3 == 16;
      goto LABEL_766;
    case 0x266u:
    case 0x269u:
    case 0x26Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      v94 = 151;
LABEL_750:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v94,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 144;
      goto LABEL_6;
    case 0x267u:
      v96 = a3 == 24;
LABEL_766:
      if ( !v96 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 151;
      v9 = 0;
      goto LABEL_6;
    case 0x26Du:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        154,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 149;
      goto LABEL_6;
    case 0x26Eu:
    case 0x26Fu:
    case 0x270u:
    case 0x271u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 161;
      v9 = 0;
      goto LABEL_6;
    case 0x272u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 164;
      v9 = 0;
      goto LABEL_6;
    case 0x273u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        167,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 168;
      goto LABEL_6;
    case 0x274u:
      if ( a3 != 16 )
        goto LABEL_11;
      v54 = 170;
LABEL_259:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v54,
        0,
        &v101);
      v8 = a2 + 2;
LABEL_260:
      v9 = 1;
LABEL_158:
      v10 = 42;
      goto LABEL_6;
    case 0x275u:
    case 0x279u:
      if ( a3 != 16 )
        goto LABEL_11;
      v48 = 170;
LABEL_225:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v48,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_226:
      v10 = 158;
      goto LABEL_6;
    case 0x276u:
    case 0x277u:
    case 0x278u:
    case 0x27Au:
    case 0x27Bu:
    case 0x27Cu:
    case 0x27Du:
    case 0x27Eu:
    case 0x27Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 170;
      v9 = 0;
      goto LABEL_6;
    case 0x280u:
      if ( a3 != 16 )
        goto LABEL_11;
      v45 = 172;
LABEL_194:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v45,
        0,
        &v101);
      v8 = a2 + 2;
LABEL_195:
      v9 = 1;
      v10 = 17;
      goto LABEL_6;
    case 0x281u:
    case 0x282u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 172;
      v9 = 0;
      goto LABEL_6;
    case 0x283u:
    case 0x284u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        173,
        0,
        &v101);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v40 = (unsigned __int64)(v4 - 16) >> 2;
      v41 = (char *)(a2 + 3);
      v39 = 35LL;
      goto LABEL_172;
    case 0x285u:
    case 0x286u:
    case 0x287u:
    case 0x288u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        173,
        0,
        &v101);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v40 = (unsigned __int64)(v4 - 16) >> 2;
      v41 = (char *)(a2 + 3);
      v39 = 43LL;
      goto LABEL_172;
    case 0x289u:
    case 0x28Au:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        176,
        0,
        &v101);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v40 = (unsigned __int64)(v4 - 16) >> 2;
      v41 = (char *)(a2 + 3);
      v39 = 175LL;
      goto LABEL_172;
    case 0x28Bu:
    case 0x28Cu:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        177,
        0,
        &v101);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v40 = (unsigned __int64)(v4 - 16) >> 2;
      v41 = (char *)(a2 + 3);
      v39 = 174LL;
      goto LABEL_172;
    case 0x28Du:
    case 0x28Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 178;
      v9 = 0;
      goto LABEL_6;
    case 0x28Fu:
    case 0x290u:
    case 0x291u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 179;
      v9 = 0;
      goto LABEL_6;
    case 0x292u:
      if ( a3 != 16 )
        goto LABEL_11;
      v32 = 185;
LABEL_122:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v32,
        0,
        &v101);
      v8 = a2 + 2;
LABEL_52:
      v9 = 1;
LABEL_53:
      v10 = 184;
      goto LABEL_6;
    case 0x293u:
    case 0x294u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        187,
        0,
        &v101);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v40 = (unsigned __int64)(v4 - 16) >> 2;
      v41 = (char *)(a2 + 3);
      v39 = 184LL;
LABEL_172:
      LOBYTE(v98) = 0;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        this,
        v41,
        v40,
        v39,
        v98,
        &v101);
      goto LABEL_7;
    case 0x295u:
    case 0x296u:
    case 0x297u:
    case 0x299u:
    case 0x2A0u:
    case 0x2A1u:
    case 0x2A2u:
      v97 = a3 == 28;
      goto LABEL_811;
    case 0x298u:
    case 0x29Au:
    case 0x2A5u:
    case 0x2A6u:
      v97 = a3 == 20;
      goto LABEL_811;
    case 0x29Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      v77 = 192;
LABEL_452:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v77,
        0,
        &v101);
      v8 = a2 + 2;
LABEL_453:
      v9 = 1;
LABEL_234:
      v10 = 67;
      goto LABEL_6;
    case 0x29Cu:
    case 0x29Du:
    case 0x29Eu:
    case 0x29Fu:
      v97 = a3 == 16;
LABEL_811:
      if ( !v97 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 192;
      v9 = 0;
      goto LABEL_6;
    case 0x2A3u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        192,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_700:
      v10 = 65;
      goto LABEL_6;
    case 0x2A4u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        192,
        0,
        &v101);
      v8 = a2 + 2;
      v9 = 1;
LABEL_735:
      v10 = 130;
LABEL_6:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        v8,
        v10,
        v9,
        &v101);
LABEL_7:
      v3 = v101;
      break;
    default:
LABEL_11:
      v3 = -1073741811;
      break;
  }
  return v3;
}
