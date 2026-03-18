/*
 * XREFs of ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180184588
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x180183FA0 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x180131AD0 (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x180184CB0 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180185B8C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEBX0@Z @ 0x1801BE8D0 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEBX0@Z.c)
 */

__int64 __fastcall CRenderData::GetHandles(CRenderData *this, struct CResourceTable *a2)
{
  unsigned int v3; // r12d
  unsigned int *v4; // rsi
  unsigned int v5; // r14d
  _QWORD *v6; // r15
  struct CResourceTable *v7; // r9
  int v8; // r11d
  __int64 v9; // rcx
  struct _LIST_ENTRY *v10; // r8
  struct _LIST_ENTRY *v11; // r10
  unsigned int v12; // edx
  struct _LIST_ENTRY *Flink; // rax
  unsigned int *p_Blink; // rdx
  unsigned __int64 Flink_high; // rax
  unsigned int v16; // ebx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int NextItemSafe; // eax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // eax
  int v25; // edi
  struct _LIST_ENTRY *v26; // rdx
  unsigned int v27; // eax
  int v28; // r9d
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-49h]
  struct _LIST_ENTRY *v31; // [rsp+30h] [rbp-39h]
  unsigned int *v32; // [rsp+38h] [rbp-31h]
  unsigned __int64 v33; // [rsp+40h] [rbp-29h]
  unsigned int *v34; // [rsp+48h] [rbp-21h]
  void *v35; // [rsp+50h] [rbp-19h] BYREF
  struct _LIST_ENTRY *v36; // [rsp+58h] [rbp-11h]
  struct _LIST_ENTRY *v37; // [rsp+60h] [rbp-9h]
  unsigned int *v38; // [rsp+68h] [rbp-1h] BYREF
  unsigned int *v39; // [rsp+70h] [rbp+7h]
  int v40; // [rsp+78h] [rbp+Fh]
  int v41; // [rsp+D0h] [rbp+67h]
  unsigned int v43; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v44; // [rsp+E8h] [rbp+7Fh] BYREF

  v43 = 0;
  v3 = 0;
  v41 = 0;
  v4 = 0LL;
  v34 = 0LL;
  v5 = 0;
  LODWORD(v33) = 0;
  v32 = 0LL;
  v6 = (_QWORD *)((char *)this + 136);
  v36 = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 72));
  v9 = *((unsigned int *)this + 40);
  v10 = v36;
  v11 = 0LL;
  v31 = 0LL;
  v44 = 0LL;
  v12 = v9 + 1;
  if ( (int)v9 + 1 < (unsigned int)v9 )
  {
    v25 = -2147024362;
    v27 = 181;
    v16 = -2147024362;
    v28 = -2147024362;
LABEL_77:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, v27, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x14u, 0LL);
    return v16;
  }
  if ( v12 <= *((_DWORD *)this + 39) )
  {
    *(_QWORD *)(*v6 + 8 * v9) = 0LL;
    *((_DWORD *)this + 40) = v12;
    goto LABEL_4;
  }
  v24 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 136, 8LL, v36, &v44);
  v25 = v24;
  v16 = v24;
  if ( v24 < 0 )
  {
    v28 = v24;
    v27 = 192;
    goto LABEL_77;
  }
  v10 = v36;
  v8 = 0;
  v7 = a2;
  v11 = 0LL;
LABEL_4:
  Flink = v10->Flink;
  if ( v10 == v10->Flink )
  {
    v16 = 1;
    goto LABEL_12;
  }
  p_Blink = (unsigned int *)&Flink[1].Blink;
  v31 = v10->Flink;
  v11 = v10->Flink;
  v34 = p_Blink;
  Flink_high = HIDWORD(Flink[1].Flink);
  v16 = -2147467259;
  v33 = Flink_high;
  v32 = p_Blink;
  if ( Flink_high )
  {
    if ( Flink_high >= 8 )
    {
      v17 = *p_Blink;
      if ( (unsigned int)v17 >= 8 && (v17 & 3) == 0 && v17 <= v33 )
      {
        v4 = p_Blink + 1;
        v3 = p_Blink[1];
        v5 = v17 - 4;
        v43 = v3;
        v16 = 0;
        v32 = (unsigned int *)((char *)p_Blink + (unsigned int)v17);
      }
    }
  }
  else
  {
    v16 = 1;
    if ( v11->Flink != v10 )
      v16 = -2147467259;
  }
  if ( (v16 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x17u, 0LL);
    return v16;
  }
LABEL_12:
  while ( 1 )
  {
    v18 = v16;
    v19 = v16;
    if ( v16 )
      break;
    if ( v3 <= 0x1A8 )
    {
      switch ( v3 )
      {
        case 0x1A8u:
          if ( v5 < 0x18 )
          {
            v16 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x6Fu, 0LL);
            return v16;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 1,
                           0x5Eu,
                           (__int64)this + 136,
                           (__int64)v7);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 117;
            goto LABEL_34;
          }
          break;
        case 0x1A3u:
          if ( v5 < 0xC )
          {
            v16 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x27u, 0LL);
            return v16;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 1,
                           0x54u,
                           (__int64)this + 136,
                           (__int64)v7);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 45;
            goto LABEL_34;
          }
          break;
        case 0x1A4u:
          if ( v5 < 0xC )
          {
            v16 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x34u, 0LL);
            return v16;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 1,
                           0x5Eu,
                           (__int64)this + 136,
                           (__int64)v7);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 58;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 2,
                           0x42u,
                           (__int64)this + 136,
                           (__int64)a2);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 59;
            goto LABEL_34;
          }
          break;
        case 0x1A5u:
          if ( v5 < 0x1C )
          {
            v16 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x42u, 0LL);
            return v16;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 1,
                           0x42u,
                           (__int64)this + 136,
                           (__int64)v7);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 72;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 2,
                           0x19u,
                           (__int64)this + 136,
                           (__int64)a2);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 73;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 3,
                           0x19u,
                           (__int64)this + 136,
                           (__int64)a2);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 74;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 4,
                           0x3Du,
                           (__int64)this + 136,
                           (__int64)a2);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 75;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 5,
                           0x3Du,
                           (__int64)this + 136,
                           (__int64)a2);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 76;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 6,
                           0x3Du,
                           (__int64)this + 136,
                           (__int64)a2);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 77;
            goto LABEL_34;
          }
          break;
        case 0x1A6u:
          if ( v5 < 0x18 )
          {
            v16 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x54u, 0LL);
            return v16;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 1,
                           0x54u,
                           (__int64)this + 136,
                           (__int64)v7);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 90;
            goto LABEL_34;
          }
          break;
        case 0x1A7u:
          if ( v5 < 0xC )
          {
            v16 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x61u, 0LL);
            return v16;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 1,
                           0x43u,
                           (__int64)this + 136,
                           (__int64)v7);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 103;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                           this,
                           v4 + 2,
                           0x54u,
                           (__int64)this + 136,
                           (__int64)a2);
          v16 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v30 = 104;
            goto LABEL_34;
          }
          break;
        default:
LABEL_80:
          v16 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x21u, 0LL);
          return v16;
      }
    }
    else
    {
      if ( v3 == 425 )
      {
        if ( v5 < 0x24 )
        {
          v16 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x7Cu, 0LL);
          return v16;
        }
        goto LABEL_38;
      }
      if ( v3 == 426 )
      {
        if ( v5 < 0x24 )
        {
          v16 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x83u, 0LL);
          return v16;
        }
        NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                         this,
                         v4 + 1,
                         0x54u,
                         (__int64)this + 136,
                         (__int64)v7);
        v16 = NextItemSafe;
        if ( NextItemSafe < 0 )
        {
          v30 = 137;
          goto LABEL_34;
        }
      }
      else
      {
        if ( v3 != 427 )
        {
          if ( v3 == 428 )
          {
            if ( v5 < 4 )
            {
              v16 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x9Du, 0LL);
              return v16;
            }
            v41 = --v8;
          }
          else
          {
            if ( v3 != 429 )
              goto LABEL_80;
            if ( v5 < 8 )
            {
              v16 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xA6u, 0LL);
              return v16;
            }
            NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                             this,
                             v4 + 1,
                             0xACu,
                             (__int64)this + 136,
                             (__int64)v7);
            v16 = NextItemSafe;
            if ( NextItemSafe < 0 )
            {
              v30 = 172;
              goto LABEL_34;
            }
            v10 = v36;
            v8 = v41 + 1;
            v11 = v31;
            ++v41;
          }
          goto LABEL_38;
        }
        if ( v5 < 8 )
        {
          v16 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x90u, 0LL);
          return v16;
        }
        NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                         this,
                         v4 + 1,
                         0xB6u,
                         (__int64)this + 136,
                         (__int64)v7);
        v16 = NextItemSafe;
        if ( NextItemSafe < 0 )
        {
          v30 = 150;
          goto LABEL_34;
        }
      }
    }
    v10 = v36;
    v11 = v31;
    v8 = v41;
LABEL_38:
    v22 = (unsigned __int64)v34 + (unsigned int)v33 - (_QWORD)v32;
    if ( v22 )
    {
      if ( v22 < 8 || (v23 = *v32, (unsigned int)v23 < 8) || (v23 & 3) != 0 || v23 > v22 )
      {
        NextItemSafe = -2147467259;
        goto LABEL_55;
      }
      v4 = v32 + 1;
      v3 = v32[1];
      v5 = v23 - 4;
      v32 = (unsigned int *)((char *)v32 + v23);
      v16 = 0;
      v7 = a2;
      v43 = v3;
    }
    else
    {
      v26 = v11->Flink;
      v4 = 0LL;
      v5 = 0;
      v35 = 0LL;
      LODWORD(v44) = 0;
      NextItemSafe = 1;
      if ( v26 != v10 )
      {
        v29 = HIDWORD(v26[1].Flink);
        v38 = (unsigned int *)&v26[1].Blink;
        v39 = (unsigned int *)&v26[1].Blink;
        v37 = v26;
        v40 = v29;
        NextItemSafe = CDataStreamReader::GetNextItemSafe(
                         (CDataStreamReader *)&v38,
                         &v43,
                         (const void **)&v35,
                         (unsigned int *)&v44);
        v11 = v37;
        v10 = v36;
        v31 = v37;
        if ( NextItemSafe == 1 )
        {
          if ( v37->Flink != v36 )
          {
            NextItemSafe = -2147467259;
            v16 = -2147467259;
LABEL_93:
            v30 = 180;
LABEL_34:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, NextItemSafe, v30, 0LL);
            return v16;
          }
          LODWORD(v33) = v40;
        }
        else
        {
          LODWORD(v33) = v40;
        }
        v5 = v44;
        v4 = (unsigned int *)v35;
        v3 = v43;
        v32 = v39;
        v34 = v38;
      }
LABEL_55:
      v16 = NextItemSafe;
      if ( NextItemSafe < 0 )
        goto LABEL_93;
      v7 = a2;
      v8 = v41;
    }
  }
  v16 = 0;
  if ( v18 != 1 )
    v16 = v19;
  if ( v8 )
  {
    v16 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xC2u, 0LL);
  }
  return v16;
}
