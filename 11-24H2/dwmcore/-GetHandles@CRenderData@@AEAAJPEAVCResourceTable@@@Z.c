/*
 * XREFs of ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180130ED4
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x180131774 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x180130D30 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x1801AAC00 (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1801AAD4C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEBX0@Z @ 0x1801B0190 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEBX0@Z.c)
 */

__int64 __fastcall CRenderData::GetHandles(CRenderData *this, struct CResourceTable *a2)
{
  unsigned int v3; // r12d
  unsigned int v4; // r14d
  _QWORD *v5; // r15
  struct CResourceTable *v6; // r9
  int v7; // r11d
  __int64 v8; // rcx
  struct _LIST_ENTRY *v9; // r8
  struct _LIST_ENTRY *v10; // r10
  unsigned int v11; // edx
  struct _LIST_ENTRY *Flink; // rax
  unsigned int *p_Blink; // rdx
  unsigned __int64 Flink_high; // rax
  unsigned int v15; // ebx
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  int NextItemSafe; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // eax
  int v24; // edi
  struct _LIST_ENTRY *v25; // rdx
  unsigned int v26; // eax
  int v27; // r9d
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-49h]
  struct _LIST_ENTRY *v30; // [rsp+30h] [rbp-39h]
  unsigned int *v31; // [rsp+38h] [rbp-31h]
  unsigned __int64 v32; // [rsp+40h] [rbp-29h]
  unsigned int *v33; // [rsp+48h] [rbp-21h]
  void *v34; // [rsp+50h] [rbp-19h] BYREF
  struct _LIST_ENTRY *v35; // [rsp+58h] [rbp-11h]
  struct _LIST_ENTRY *v36; // [rsp+60h] [rbp-9h]
  unsigned int *v37; // [rsp+68h] [rbp-1h] BYREF
  unsigned int *v38; // [rsp+70h] [rbp+7h]
  int v39; // [rsp+78h] [rbp+Fh]
  int v40; // [rsp+D0h] [rbp+67h]
  unsigned int v42; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v43; // [rsp+E8h] [rbp+7Fh] BYREF

  v42 = 0;
  v3 = 0;
  v40 = 0;
  v33 = 0LL;
  v4 = 0;
  LODWORD(v32) = 0;
  v31 = 0LL;
  v5 = (_QWORD *)((char *)this + 136);
  v35 = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 72));
  v8 = *((unsigned int *)this + 40);
  v9 = v35;
  v10 = 0LL;
  v30 = 0LL;
  v43 = 0LL;
  v11 = v8 + 1;
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    v24 = -2147024362;
    v26 = 181;
    v15 = -2147024362;
    v27 = -2147024362;
LABEL_77:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, v26, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x14u, 0LL);
    return v15;
  }
  if ( v11 <= *((_DWORD *)this + 39) )
  {
    *(_QWORD *)(*v5 + 8 * v8) = 0LL;
    *((_DWORD *)this + 40) = v11;
    goto LABEL_4;
  }
  v23 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 136, 8LL, v35, &v43);
  v24 = v23;
  v15 = v23;
  if ( v23 < 0 )
  {
    v27 = v23;
    v26 = 192;
    goto LABEL_77;
  }
  v9 = v35;
  v7 = 0;
  v6 = a2;
  v10 = 0LL;
LABEL_4:
  Flink = v9->Flink;
  if ( v9 == v9->Flink )
  {
    v15 = 1;
    goto LABEL_12;
  }
  p_Blink = (unsigned int *)&Flink[1].Blink;
  v30 = v9->Flink;
  v10 = v9->Flink;
  v33 = p_Blink;
  Flink_high = HIDWORD(Flink[1].Flink);
  v15 = -2147467259;
  v32 = Flink_high;
  v31 = p_Blink;
  if ( Flink_high )
  {
    if ( Flink_high >= 8 )
    {
      v16 = *p_Blink;
      if ( (unsigned int)v16 >= 8 && (v16 & 3) == 0 && v16 <= v32 )
      {
        v3 = p_Blink[1];
        v4 = v16 - 4;
        v42 = v3;
        v15 = 0;
        v31 = (unsigned int *)((char *)p_Blink + (unsigned int)v16);
      }
    }
  }
  else
  {
    v15 = 1;
    if ( v10->Flink != v9 )
      v15 = -2147467259;
  }
  if ( (v15 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x17u, 0LL);
    return v15;
  }
LABEL_12:
  while ( 1 )
  {
    v17 = v15;
    v18 = v15;
    if ( v15 )
      break;
    if ( v3 <= 0x1B1 )
    {
      switch ( v3 )
      {
        case 0x1B1u:
          if ( v4 < 0x18 )
          {
            v15 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x6Fu, 0LL);
            return v15;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)v6);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 117;
            goto LABEL_34;
          }
          break;
        case 0x1ACu:
          if ( v4 < 0xC )
          {
            v15 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x27u, 0LL);
            return v15;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)v6);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 45;
            goto LABEL_34;
          }
          break;
        case 0x1ADu:
          if ( v4 < 0xC )
          {
            v15 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x34u, 0LL);
            return v15;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)v6);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 58;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 59;
            goto LABEL_34;
          }
          break;
        case 0x1AEu:
          if ( v4 < 0x1C )
          {
            v15 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x42u, 0LL);
            return v15;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)v6);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 72;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 73;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 74;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 75;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 76;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 77;
            goto LABEL_34;
          }
          break;
        case 0x1AFu:
          if ( v4 < 0x18 )
          {
            v15 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x54u, 0LL);
            return v15;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)v6);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 90;
            goto LABEL_34;
          }
          break;
        case 0x1B0u:
          if ( v4 < 0xC )
          {
            v15 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x61u, 0LL);
            return v15;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)v6);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 103;
            goto LABEL_34;
          }
          NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
          v15 = NextItemSafe;
          if ( NextItemSafe < 0 )
          {
            v29 = 104;
            goto LABEL_34;
          }
          break;
        default:
LABEL_80:
          v15 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x21u, 0LL);
          return v15;
      }
    }
    else
    {
      if ( v3 == 434 )
      {
        if ( v4 < 0x24 )
        {
          v15 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x7Cu, 0LL);
          return v15;
        }
        goto LABEL_38;
      }
      if ( v3 == 435 )
      {
        if ( v4 < 0x24 )
        {
          v15 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x83u, 0LL);
          return v15;
        }
        NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)v6);
        v15 = NextItemSafe;
        if ( NextItemSafe < 0 )
        {
          v29 = 137;
          goto LABEL_34;
        }
      }
      else
      {
        if ( v3 != 436 )
        {
          if ( v3 == 437 )
          {
            if ( v4 < 4 )
            {
              v15 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x9Du, 0LL);
              return v15;
            }
            v40 = --v7;
          }
          else
          {
            if ( v3 != 438 )
              goto LABEL_80;
            if ( v4 < 8 )
            {
              v15 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xA6u, 0LL);
              return v15;
            }
            NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)v6);
            v15 = NextItemSafe;
            if ( NextItemSafe < 0 )
            {
              v29 = 172;
              goto LABEL_34;
            }
            v9 = v35;
            v7 = v40 + 1;
            v10 = v30;
            ++v40;
          }
          goto LABEL_38;
        }
        if ( v4 < 8 )
        {
          v15 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x90u, 0LL);
          return v15;
        }
        NextItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)v6);
        v15 = NextItemSafe;
        if ( NextItemSafe < 0 )
        {
          v29 = 150;
          goto LABEL_34;
        }
      }
    }
    v9 = v35;
    v10 = v30;
    v7 = v40;
LABEL_38:
    v21 = (unsigned __int64)v33 + (unsigned int)v32 - (_QWORD)v31;
    if ( v21 )
    {
      if ( v21 < 8 || (v22 = *v31, (unsigned int)v22 < 8) || (v22 & 3) != 0 || v22 > v21 )
      {
        NextItemSafe = -2147467259;
        goto LABEL_55;
      }
      v3 = v31[1];
      v4 = v22 - 4;
      v31 = (unsigned int *)((char *)v31 + v22);
      v15 = 0;
      v6 = a2;
      v42 = v3;
    }
    else
    {
      v25 = v10->Flink;
      v4 = 0;
      v34 = 0LL;
      LODWORD(v43) = 0;
      NextItemSafe = 1;
      if ( v25 != v9 )
      {
        v28 = HIDWORD(v25[1].Flink);
        v37 = (unsigned int *)&v25[1].Blink;
        v38 = (unsigned int *)&v25[1].Blink;
        v36 = v25;
        v39 = v28;
        NextItemSafe = CDataStreamReader::GetNextItemSafe(
                         (CDataStreamReader *)&v37,
                         &v42,
                         (const void **)&v34,
                         (unsigned int *)&v43);
        v10 = v36;
        v9 = v35;
        v30 = v36;
        if ( NextItemSafe == 1 )
        {
          if ( v36->Flink != v35 )
          {
            NextItemSafe = -2147467259;
            v15 = -2147467259;
LABEL_93:
            v29 = 180;
LABEL_34:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, NextItemSafe, v29, 0LL);
            return v15;
          }
          LODWORD(v32) = v39;
        }
        else
        {
          LODWORD(v32) = v39;
        }
        v4 = v43;
        v3 = v42;
        v31 = v38;
        v33 = v37;
      }
LABEL_55:
      v15 = NextItemSafe;
      if ( NextItemSafe < 0 )
        goto LABEL_93;
      v6 = a2;
      v7 = v40;
    }
  }
  v15 = 0;
  if ( v17 != 1 )
    v15 = v18;
  if ( v7 )
  {
    v15 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xC2u, 0LL);
  }
  return v15;
}
