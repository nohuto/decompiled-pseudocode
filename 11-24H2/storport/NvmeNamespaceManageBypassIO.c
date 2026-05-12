/*
 * XREFs of NvmeNamespaceManageBypassIO @ 0x1401A57D8
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceManageBypassIO(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ebx
  int *v4; // r14
  size_t v7; // rdx
  int v8; // esi
  unsigned int v9; // r15d
  int *v10; // r13
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r12d
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  const wchar_t *v17; // rax
  _OWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  size_t v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  _OWORD *v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int16 v27; // ax
  bool v28; // zf
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  int *v31; // rax
  const EVENT_DESCRIPTOR *v32; // rdx
  unsigned __int64 v33; // rdx
  char v34; // r12
  _BYTE *v35; // r9
  unsigned __int8 v36; // r10
  char v37; // r11
  char v38; // r14
  char v39; // r13
  char *v40; // r14
  unsigned int v41; // r8d
  unsigned int *v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // r15
  char v45; // cl
  char v46; // r8
  _BYTE *v47; // rax
  unsigned int v48; // eax
  char v49; // al
  int v51; // [rsp+20h] [rbp-59h]
  char v52; // [rsp+60h] [rbp-19h]
  char v53; // [rsp+61h] [rbp-18h]
  const wchar_t *v54; // [rsp+68h] [rbp-11h]
  int v55; // [rsp+68h] [rbp-11h]
  unsigned __int16 v56; // [rsp+70h] [rbp-9h]
  unsigned __int64 v58; // [rsp+78h] [rbp-1h]
  GUID Src; // [rsp+80h] [rbp+7h] BYREF
  wchar_t v60; // [rsp+90h] [rbp+17h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(int **)(a2 + 24);
  v7 = *(unsigned int *)(v2 + 8);
  v60 = aDriver_0[8];
  v8 = 0;
  v9 = 0;
  v54 = L"Failure found while processing operation parameters";
  v10 = 0LL;
  v11 = -1LL;
  Src = *(GUID *)L"\\Driver\\";
  do
    ++v11;
  while ( *((_WORD *)&Src.Data1 + v11) );
  v56 = v11;
  *(_QWORD *)&Src.Data1 = *(_QWORD *)L".sys";
  *(_WORD *)Src.Data4 = aSys[4];
  if ( *(_DWORD *)(v2 + 16) >= 0x18u )
  {
    if ( *v4 != 24 )
    {
      v8 = -1073741637;
      goto LABEL_46;
    }
    v12 = v4[2];
    v13 = 2;
    if ( (unsigned int)(v12 - 1) > 2 )
    {
LABEL_8:
      v8 = -1073741811;
      goto LABEL_46;
    }
    if ( (unsigned int)v7 < 8 )
    {
      v8 = -1073741789;
      goto LABEL_46;
    }
    if ( *(_BYTE *)(a2 + 64) )
    {
      v8 = -1073741790;
      goto LABEL_46;
    }
    v14 = v12 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        v9 = 24;
        goto LABEL_20;
      }
      if ( v15 != 1 )
        goto LABEL_8;
      v13 = 3;
    }
    else
    {
      v13 = 1;
    }
    v9 = 352;
    v10 = v4 + 6;
LABEL_20:
    if ( (unsigned int)v7 < v9 )
    {
      memset_0(v4, 0, v7);
      v4[1] = v9;
      v9 = 8;
      *v4 = 352;
      goto LABEL_46;
    }
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1048LL);
    if ( v16 && (*(_DWORD *)(v16 + 24) & 0x20000) != 0 )
    {
      v8 = -1073741637;
      v17 = L"Bypass IO not supported";
    }
    else
    {
      if ( v13 == 1 || (unsigned int)(v13 - 2) < 2 )
        goto LABEL_29;
      v8 = -1073741811;
      v17 = L"Invalid operation";
    }
    v54 = v17;
LABEL_29:
    if ( v9 == 24 )
    {
      memset_0(v4, 0, v7);
      *v4 = 352;
      v4[1] = 24;
      v4[2] = v13;
    }
    else
    {
      memset_0(v4, 0, v7);
      *v4 = 352;
      v4[1] = 352;
      v4[2] = v13;
      if ( v8 < 0 )
      {
        *v10 = v8;
        v18 = (_OWORD *)((char *)v10 + 6);
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
        v20 = *(unsigned __int16 *)(v19 + 56);
        v21 = v20 - 16;
        v22 = *(_QWORD *)(v19 + 64);
        if ( (unsigned __int64)(v20 - 8) >= 0x40 )
        {
          v25 = (_OWORD *)(v22 + 2LL * v56);
          if ( v21 >= 0x40 )
          {
            *v18 = *v25;
            *(_OWORD *)((char *)v10 + 22) = v25[1];
            *(_OWORD *)((char *)v10 + 38) = v25[2];
            *(_OWORD *)((char *)v10 + 54) = v25[3];
          }
          else
          {
            memmove((char *)v10 + 6, (const void *)(v22 + 2LL * v56), v21);
            v26 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL);
            memmove((char *)v10 + 2 * ((v26 >> 1) - v56) + 6, &Src, 80 - v26);
          }
          v23 = -1LL;
          LOWORD(v24) = 32;
        }
        else
        {
          memmove((char *)v10 + 6, (const void *)(v22 + 2LL * v56), v21);
          v23 = -1LL;
          *(_QWORD *)((char *)v10
                    + 2
                    * (((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL) >> 1)
                     - v56)
                    + 6) = *(_QWORD *)&Src.Data1;
          v24 = -1LL;
          do
            ++v24;
          while ( *((_WORD *)v18 + v24) );
        }
        *((_WORD *)v10 + 2) = v24;
        do
          ++v23;
        while ( v54[v23] );
        v27 = 128;
        if ( v23 < 0x80 )
          v27 = v23;
        *((_WORD *)v10 + 35) = v27;
        memmove(v10 + 18, v54, 2LL * v27);
      }
    }
    v8 = 0;
    goto LABEL_46;
  }
  v8 = -1073741820;
LABEL_46:
  v28 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v9;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v28 )
    goto LABEL_112;
  Src = 0LL;
  IoGetActivityIdIrp(a2, &Src);
  v30 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v30 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_112;
    v51 = *(_DWORD *)(a2 + 48);
    v32 = &EventNonReadWriteRequestComplete;
    goto LABEL_111;
  }
  if ( *(_BYTE *)v30 != 15 )
  {
    if ( *(_BYTE *)v30 != 27 )
      goto LABEL_112;
    if ( *(_BYTE *)(v30 + 1) == 7 && !*(_DWORD *)(v30 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v31 = *(int **)(a2 + 56);
        if ( v31 )
          v3 = *v31;
        McTemplateK0pqd_EtwWriteTransfer(v29, v30, &Src, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_112;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_112;
    v32 = &EventPnpRequestComplete;
    v51 = *(_DWORD *)(a2 + 48);
LABEL_111:
    McTemplateK0pd_EtwWriteTransfer(v29, v32, &Src, a2, v51);
    goto LABEL_112;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_112;
  v33 = *(_QWORD *)(v30 + 8);
  v34 = 0;
  v35 = 0LL;
  v52 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( *(_BYTE *)(v33 + 2) != 40 )
  {
    v45 = *(_BYTE *)(v33 + 72);
    v35 = *(_BYTE **)(v33 + 32);
    v36 = *(_BYTE *)(v33 + 11);
    v34 = *(_BYTE *)(v33 + 4);
    if ( !*(_BYTE *)(v33 + 2) )
      goto LABEL_88;
    goto LABEL_112;
  }
  v40 = 0LL;
  v53 = 0;
  if ( *(_DWORD *)(v33 + 20) )
    goto LABEL_112;
  v29 = 0LL;
  v55 = 0;
  if ( !*(_DWORD *)(v33 + 56) )
    goto LABEL_85;
  v41 = *(_DWORD *)(v33 + 56);
  v42 = (unsigned int *)(v33 + 120);
  v58 = v33 + 120;
  while ( 1 )
  {
    v43 = *v42;
    if ( (unsigned int)v43 >= 0x80 )
    {
      v44 = *(unsigned int *)(v33 + 16);
      if ( (unsigned int)v43 < (unsigned int)v44 )
        break;
    }
LABEL_79:
    v29 = (unsigned int)(v29 + 1);
    v42 = (unsigned int *)(v58 + 4);
    v55 = v29;
    v58 += 4LL;
    if ( (unsigned int)v29 >= v41 )
      goto LABEL_85;
  }
  if ( *(_DWORD *)(v43 + v33) != 64 )
  {
    v29 = (unsigned int)(*(_DWORD *)(v43 + v33) - 65);
    if ( *(_DWORD *)(v43 + v33) == 65 )
    {
      v29 = v43 + 56;
      if ( v43 + 56 <= v44 )
      {
        v53 = 1;
        if ( *(_BYTE *)(v43 + v33 + 10) )
          v40 = (char *)(v43 + v33 + 24);
        v34 = *(_BYTE *)(v43 + v33 + 8);
        v35 = *(_BYTE **)(v43 + v33 + 16);
        v36 = *(_BYTE *)(v43 + v33 + 9);
      }
    }
    else if ( *(_DWORD *)(v43 + v33) == 66 )
    {
      v29 = v43 + 40;
      if ( v43 + 40 <= v44 )
      {
        if ( *(_DWORD *)(v43 + v33 + 12) )
          v40 = (char *)(v43 + v33 + 32);
        v35 = *(_BYTE **)(v43 + v33 + 24);
        goto LABEL_84;
      }
    }
    goto LABEL_77;
  }
  v29 = v43 + 40;
  if ( v43 + 40 > v44 )
  {
LABEL_77:
    if ( v53 )
      goto LABEL_85;
    LODWORD(v29) = v55;
    v41 = *(_DWORD *)(v33 + 56);
    goto LABEL_79;
  }
  if ( *(_BYTE *)(v43 + v33 + 10) )
    v40 = (char *)(v43 + v33 + 24);
  v35 = *(_BYTE **)(v43 + v33 + 16);
LABEL_84:
  v36 = *(_BYTE *)(v43 + v33 + 9);
  v34 = *(_BYTE *)(v43 + v33 + 8);
LABEL_85:
  if ( v40 )
  {
    v45 = *v40;
    v38 = 0;
LABEL_88:
    LOBYTE(v29) = v45 - 8;
    if ( (v29 & 0x5D) == 0 )
    {
      v46 = *(_BYTE *)(v33 + 3);
      if ( v46 == 1 || !v35 || !v36 )
        goto LABEL_107;
      LOBYTE(v33) = 0;
      v29 = (unsigned __int64)&v35[v36];
      v47 = v35 + 8;
      if ( (unsigned __int8)((*v35 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v47 <= v29 )
        {
          LOBYTE(v33) = 1;
          v38 = v35[2];
          v37 = v35[1] & 0xF;
          v39 = v35[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v47 <= v29 )
        {
          v37 = v35[2] & 0xF;
          v48 = v36;
          if ( (unsigned int)(unsigned __int8)v35[7] + 8 <= v36 )
            v48 = (unsigned __int8)v35[7] + 8;
          v29 = (unsigned __int64)(v35 + 13);
          v33 = (unsigned __int64)&v35[v48];
          if ( (unsigned __int64)(v35 + 13) > v33 )
            v52 = 0;
          else
            v52 = v35[12];
          if ( (unsigned __int64)(v35 + 14) <= v33 )
            v39 = *(_BYTE *)v29;
          LOBYTE(v33) = 1;
        }
        v38 = v52;
      }
      if ( (_BYTE)v33 )
      {
        LOBYTE(v3) = v38;
        v49 = v39;
      }
      else
      {
LABEL_107:
        v37 = 0;
        v49 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v29, v33, &Src, a2, *(_DWORD *)(a2 + 48), v46, v34, v37, v3, v49, a2);
    }
  }
LABEL_112:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
