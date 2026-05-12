/*
 * XREFs of RaDriverIoIrp @ 0x14000A140
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterIoIrp @ 0x14000A4C8 (RaidAdapterIoIrp.c)
 *     RaUnitIoIrp @ 0x14000A870 (RaUnitIoIrp.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     NvmeNamespaceIoIrp @ 0x140105140 (NvmeNamespaceIoIrp.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaDriverIoIrp(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // esi
  int v9; // ebx
  bool v10; // zf
  char *v11; // rcx
  __int64 v12; // rdx
  void *v13; // rdx
  int *v14; // rax
  unsigned __int64 v15; // rdx
  char *v16; // rax
  char v17; // r14
  unsigned int v18; // eax
  char v19; // r11
  char v20; // bp
  char v21; // al
  char v22; // r15
  _BYTE *v23; // r9
  unsigned __int8 v24; // r10
  char *v25; // r11
  char v26; // r13
  unsigned int v27; // r12d
  unsigned int *v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // rbp
  char v31; // cl
  char v32; // r8
  char v33; // [rsp+60h] [rbp-68h]
  char v34; // [rsp+61h] [rbp-67h]
  char v35; // [rsp+62h] [rbp-66h]
  unsigned int v36; // [rsp+64h] [rbp-64h]
  __int128 v38; // [rsp+70h] [rbp-58h] BYREF

  v3 = a1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 20LL, &WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(v3 + 64);
  v5 = *v4;
  if ( *v4 == 1094997074 )
  {
    v6 = RaidAdapterIoIrp(v4, a2);
LABEL_5:
    v7 = v6;
    goto LABEL_6;
  }
  if ( v5 == 1431193940 )
  {
    v6 = RaUnitIoIrp(v4, a2);
    goto LABEL_5;
  }
  if ( v5 != 1314275652 )
  {
    if ( v5 != 1314278989 )
    {
      v7 = -1073741823;
      goto LABEL_6;
    }
    v6 = NvmeNamespaceIoIrp(v4, a2);
    goto LABEL_5;
  }
  LOBYTE(v9) = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v10 = StorEtwLoggingEnabled == 0;
  v7 = -1073741823;
  *(_DWORD *)(a2 + 48) = -1073741823;
  if ( v10 )
    goto LABEL_18;
  v38 = 0LL;
  IoGetActivityIdIrp(a2, &v38);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_18;
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_43;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_18;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v9 = *v14;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v11, v12, (unsigned int)&v38, a2, v9, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_18;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_18;
    v13 = &EventPnpRequestComplete;
LABEL_43:
    McTemplateK0pd_EtwWriteTransfer(v11, v13, &v38, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_18;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_18;
  v15 = *(_QWORD *)(v12 + 8);
  v22 = 0;
  v35 = 0;
  v23 = 0LL;
  v24 = 0;
  v33 = 0;
  v17 = 0;
  v34 = 0;
  v20 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v15 + 72);
    v23 = *(_BYTE **)(v15 + 32);
    v24 = *(_BYTE *)(v15 + 11);
    v22 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_87;
    goto LABEL_18;
  }
  v25 = 0LL;
  v26 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_18;
  v27 = 0;
  v36 = *(_DWORD *)(v15 + 56);
  if ( !v36 )
    goto LABEL_79;
  v28 = (unsigned int *)(v15 + 120);
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_76:
    ++v27;
    ++v28;
    if ( v27 >= v36 )
    {
LABEL_77:
      v22 = v35;
      goto LABEL_78;
    }
  }
  if ( *(_DWORD *)(v29 + v15) != 64 )
  {
    LODWORD(v11) = *(_DWORD *)(v29 + v15) - 65;
    if ( *(_DWORD *)(v29 + v15) == 65 )
    {
      LODWORD(v11) = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v26 = 1;
        if ( *(_BYTE *)(v29 + v15 + 10) )
          v25 = (char *)((unsigned int)v29 + v15 + 24);
        v23 = *(_BYTE **)((unsigned int)v29 + v15 + 16);
        v24 = *(_BYTE *)((unsigned int)v29 + v15 + 9);
        v35 = *(_BYTE *)(v29 + v15 + 8);
      }
    }
    else if ( *(_DWORD *)(v29 + v15) == 66 )
    {
      LODWORD(v11) = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + v15 + 12) )
          v25 = (char *)(v29 + v15 + 32);
        v23 = *(_BYTE **)(v29 + v15 + 24);
        goto LABEL_85;
      }
    }
    goto LABEL_75;
  }
  LODWORD(v11) = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_75:
    if ( v26 )
      goto LABEL_77;
    goto LABEL_76;
  }
  if ( *(_BYTE *)(v29 + v15 + 10) )
    v25 = (char *)((unsigned int)v29 + v15 + 24);
  v23 = *(_BYTE **)(v29 + v15 + 16);
LABEL_85:
  v22 = *(_BYTE *)(v29 + v15 + 8);
  v24 = *(_BYTE *)(v29 + v15 + 9);
LABEL_78:
  v20 = 0;
LABEL_79:
  if ( v25 )
  {
    v31 = *v25;
    v19 = 0;
LABEL_87:
    LOBYTE(v11) = v31 - 8;
    if ( ((unsigned __int8)v11 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v15 + 3);
      if ( v32 == 1 || !v23 || !v24 )
        goto LABEL_38;
      LOBYTE(v15) = 0;
      v11 = &v23[v24];
      v16 = v23 + 8;
      if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
      {
        if ( v16 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v23[2];
          v17 = v23[1] & 0xF;
          v19 = v23[3];
        }
      }
      else
      {
        if ( v16 <= v11 )
        {
          v17 = v23[2] & 0xF;
          v18 = v24;
          if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
            v18 = (unsigned __int8)v23[7] + 8;
          v11 = v23 + 13;
          v15 = (unsigned __int64)&v23[v18];
          if ( (unsigned __int64)(v23 + 13) > v15 )
            v33 = 0;
          else
            v33 = v23[12];
          if ( (unsigned __int64)(v23 + 14) > v15 )
            v34 = 0;
          else
            v34 = *v11;
          LOBYTE(v15) = 1;
        }
        v19 = v34;
        v20 = v33;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v9) = v20;
        v21 = v19;
      }
      else
      {
LABEL_38:
        v17 = 0;
        v21 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v11,
        v15,
        (unsigned int)&v38,
        a2,
        *(_DWORD *)(a2 + 48),
        v32,
        v22,
        v17,
        v9,
        v21,
        a2);
    }
  }
LABEL_18:
  IofCompleteRequest((PIRP)a2, 0);
  v3 = a1;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids, v3, a2, v7);
  }
  return v7;
}
