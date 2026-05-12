/*
 * XREFs of RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x14000D4E0
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401BEAB0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x14000CE9C (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x14000E1B0 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // r15
  unsigned int *v7; // r13
  unsigned int v8; // edx
  int v9; // ecx
  unsigned __int64 v10; // r9
  int v11; // esi
  unsigned int v12; // eax
  char v13; // bl
  unsigned int v14; // r10d
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __int128 v17; // xmm3
  __int128 v18; // xmm0
  unsigned int v19; // r8d
  size_t v20; // r12
  int v21; // eax
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  unsigned __int64 v26; // xmm0_8
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // ebx
  int v30; // eax
  __int64 v31; // rax
  bool v32; // zf
  char *v33; // rcx
  __int64 v34; // rdx
  int *v35; // rax
  void *v36; // rdx
  unsigned __int64 v37; // rdx
  char v38; // bl
  char v39; // r12
  _BYTE *v40; // r9
  unsigned __int8 v41; // r10
  char v42; // r11
  char v43; // r13
  char *v44; // rbx
  int v45; // eax
  unsigned int v46; // r8d
  unsigned int *v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // r15
  char v50; // cl
  char v51; // r8
  char *v52; // rax
  unsigned int v53; // eax
  char v54; // al
  char v56; // [rsp+60h] [rbp-A0h]
  char v57; // [rsp+61h] [rbp-9Fh]
  int v58; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int *v59; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v60; // [rsp+70h] [rbp-90h]
  __m128i v61; // [rsp+78h] [rbp-88h]
  __m128i v62; // [rsp+88h] [rbp-78h]
  __int128 v63; // [rsp+98h] [rbp-68h]
  __int128 v64; // [rsp+A8h] [rbp-58h]
  char v65[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v66; // [rsp+E0h] [rbp-20h]
  __int128 v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+100h] [rbp+0h] BYREF

  *(_QWORD *)&v68 = a1;
  memset_0(v65, 0, 0x40uLL);
  v4 = *(_QWORD *)(a2 + 184);
  LOBYTE(v5) = 0;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = 0LL;
  v59 = 0LL;
  v58 = 0;
  v8 = *(_DWORD *)(v4 + 16);
  v9 = *(_DWORD *)(v6 + 4);
  v10 = *(unsigned int *)(v4 + 8);
  if ( !v9 )
  {
    if ( *(_DWORD *)v6 == 50 )
    {
      v12 = 48;
      v13 = 0;
      v14 = 48;
    }
    else
    {
      if ( *(_DWORD *)v6 != 68 )
      {
LABEL_7:
        v11 = -1073741585;
        goto LABEL_41;
      }
      v12 = 80;
      v13 = 1;
      v14 = 72;
    }
    if ( v8 < v12 )
      goto LABEL_7;
    if ( v13 )
    {
      if ( *(_DWORD *)(v6 + 8) != 1 || *(_DWORD *)(v6 + 12) != 72 )
      {
        v11 = -1073741585;
        goto LABEL_38;
      }
      v18 = *(_OWORD *)(v6 + 48);
      v15 = *(__m128i *)(v6 + 16);
      v16 = *(__m128i *)(v6 + 32);
      v17 = *(_OWORD *)(v6 + 64);
      v60 = *(_QWORD *)(v6 + 48);
    }
    else
    {
      v15 = *(__m128i *)(v6 + 8);
      v16 = *(__m128i *)(v6 + 24);
      v17 = v67;
      v60 = *(_QWORD *)(v6 + 40);
      *(_QWORD *)&v66 = v60;
      v18 = v66;
    }
    v64 = v17;
    v63 = v18;
    v62 = v16;
    v61 = v15;
    if ( !_mm_cvtsi128_si32(v15) )
      goto LABEL_7;
    if ( !v15.m128i_i32[1] )
      goto LABEL_7;
    v19 = _mm_cvtsi128_si32(v16);
    if ( v19 )
    {
      if ( v19 < (unsigned __int64)(v13 != 0 ? 0x18 : 0) + 40 || !v16.m128i_i32[1] )
        goto LABEL_7;
    }
    if ( (unsigned int)v10 >= v14 )
    {
      v20 = v10;
      if ( v10 < HIDWORD(v16.m128i_i64[0]) + (unsigned __int64)v19 + 8 )
        goto LABEL_7;
      v21 = RaBuildQueryProtocolSpecificPropertyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &v59, &v58);
      v7 = v59;
      v11 = v21;
      if ( v21 >= 0 )
      {
        v11 = RaidUnitSendSrbIoControlSynchronously(v68, a2, (__int64)v59, v58, 0LL, 0, 64);
        if ( v11 >= 0 )
        {
          memset_0((void *)v6, 0, v20);
          v22 = v61;
          v23 = v62;
          if ( v13 )
          {
            *(_DWORD *)v6 = 1;
            *(_DWORD *)(v6 + 4) = 72;
            *(__m128i *)(v6 + 8) = v22;
            v24 = v63;
            *(__m128i *)(v6 + 24) = v23;
            v25 = v64;
            *(_OWORD *)(v6 + 40) = v24;
            *(_OWORD *)(v6 + 56) = v25;
          }
          else
          {
            *(__m128i *)(v6 + 8) = v61;
            *(_DWORD *)v6 = 48;
            v26 = v60;
            *(__m128i *)(v6 + 24) = v23;
            *(_DWORD *)(v6 + 4) = 48;
            *(_QWORD *)(v6 + 40) = v26;
          }
          *(_DWORD *)(v6 + 32) = v7[15];
          v27 = v7[14];
          if ( v27 )
          {
            v28 = *(_DWORD *)(v6 + 28);
            if ( v28 >= v27 )
              v28 = v7[14];
            v29 = v28;
            memmove((void *)(v6 + *(unsigned int *)(v6 + 24) + 8LL), (char *)v7 + v7[13] + 36, v28);
            v30 = *(_DWORD *)(v6 + 24) + 8;
            *(_DWORD *)(v6 + 28) = v29;
            v31 = v29 + v30;
          }
          else
          {
            *(_DWORD *)(v6 + 28) = 0;
            v31 = v13 != 0 ? 72LL : 48LL;
          }
          *(_QWORD *)(a2 + 56) = v31;
        }
      }
    }
    else
    {
      if ( (unsigned int)v10 < 8 )
      {
        v11 = -1073741789;
        goto LABEL_41;
      }
      v11 = 0;
      *(_DWORD *)v6 = v13 != 0 ? 1 : 48;
      *(_DWORD *)(v6 + 4) = v13 != 0 ? 72 : 48;
      *(_QWORD *)(a2 + 56) = 8LL;
    }
LABEL_38:
    if ( v7 )
      ExFreePoolWithTag(v7, 0x72536152u);
    if ( v11 >= 0 )
      goto LABEL_42;
    goto LABEL_41;
  }
  if ( v9 != 1 )
  {
    v11 = -1073741637;
LABEL_41:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_42;
  }
  v11 = 0;
LABEL_42:
  v32 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v32 )
    goto LABEL_108;
  v68 = 0LL;
  IoGetActivityIdIrp(a2, &v68);
  v34 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v34 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_108;
    v36 = &EventNonReadWriteRequestComplete;
    goto LABEL_107;
  }
  if ( *(_BYTE *)v34 != 15 )
  {
    if ( *(_BYTE *)v34 != 27 )
      goto LABEL_108;
    if ( *(_BYTE *)(v34 + 1) == 7 && !*(_DWORD *)(v34 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v35 = *(int **)(a2 + 56);
        if ( v35 )
          v5 = *v35;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v33, v34, (unsigned int)&v68, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_108;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_108;
    v36 = &EventPnpRequestComplete;
LABEL_107:
    McTemplateK0pd_EtwWriteTransfer(v33, v36, &v68, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_108;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_108;
  v37 = *(_QWORD *)(v34 + 8);
  v38 = 0;
  v39 = 0;
  v56 = 0;
  v40 = 0LL;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( *(_BYTE *)(v37 + 2) != 40 )
  {
    v50 = *(_BYTE *)(v37 + 72);
    v40 = *(_BYTE **)(v37 + 32);
    v41 = *(_BYTE *)(v37 + 11);
    v39 = *(_BYTE *)(v37 + 4);
    if ( !*(_BYTE *)(v37 + 2) )
      goto LABEL_84;
    goto LABEL_108;
  }
  v44 = 0LL;
  v57 = 0;
  if ( *(_DWORD *)(v37 + 20) )
    goto LABEL_108;
  v45 = *(_DWORD *)(v37 + 56);
  LODWORD(v33) = 0;
  LODWORD(v59) = 0;
  v58 = v45;
  if ( !v45 )
    goto LABEL_81;
  v46 = v58;
  v47 = (unsigned int *)(v37 + 120);
  v60 = v37 + 120;
  while ( 1 )
  {
    v48 = *v47;
    if ( (unsigned int)v48 >= 0x80 )
    {
      v49 = *(unsigned int *)(v37 + 16);
      if ( (unsigned int)v48 < (unsigned int)v49 )
        break;
    }
LABEL_75:
    LODWORD(v33) = (_DWORD)v33 + 1;
    v47 = (unsigned int *)(v60 + 4);
    LODWORD(v59) = (_DWORD)v33;
    v60 += 4LL;
    if ( (unsigned int)v33 >= v46 )
      goto LABEL_81;
  }
  if ( *(_DWORD *)(v48 + v37) != 64 )
  {
    LODWORD(v33) = *(_DWORD *)(v48 + v37) - 65;
    if ( *(_DWORD *)(v48 + v37) == 65 )
    {
      LODWORD(v33) = v48 + 56;
      if ( v48 + 56 <= v49 )
      {
        v57 = 1;
        if ( *(_BYTE *)(v48 + v37 + 10) )
          v44 = (char *)(v48 + v37 + 24);
        v39 = *(_BYTE *)(v48 + v37 + 8);
        v40 = *(_BYTE **)(v48 + v37 + 16);
        v41 = *(_BYTE *)(v48 + v37 + 9);
      }
    }
    else if ( *(_DWORD *)(v48 + v37) == 66 )
    {
      LODWORD(v33) = v48 + 40;
      if ( v48 + 40 <= v49 )
      {
        if ( *(_DWORD *)(v48 + v37 + 12) )
          v44 = (char *)(v48 + v37 + 32);
        v40 = *(_BYTE **)(v48 + v37 + 24);
        goto LABEL_80;
      }
    }
    goto LABEL_73;
  }
  LODWORD(v33) = v48 + 40;
  if ( v48 + 40 > v49 )
  {
LABEL_73:
    if ( v57 )
      goto LABEL_81;
    LODWORD(v33) = (_DWORD)v59;
    v46 = v58;
    goto LABEL_75;
  }
  if ( *(_BYTE *)(v48 + v37 + 10) )
    v44 = (char *)(v48 + v37 + 24);
  v40 = *(_BYTE **)(v48 + v37 + 16);
LABEL_80:
  v41 = *(_BYTE *)(v48 + v37 + 9);
  v39 = *(_BYTE *)(v48 + v37 + 8);
LABEL_81:
  if ( v44 )
  {
    v50 = *v44;
    v38 = 0;
LABEL_84:
    LOBYTE(v33) = v50 - 8;
    if ( ((unsigned __int8)v33 & 0x5D) == 0 )
    {
      v51 = *(_BYTE *)(v37 + 3);
      if ( v51 == 1 || !v40 || !v41 )
        goto LABEL_103;
      LOBYTE(v37) = 0;
      v33 = &v40[v41];
      v52 = v40 + 8;
      if ( (unsigned __int8)((*v40 & 0x7F) - 114) <= 1u )
      {
        if ( v52 <= v33 )
        {
          LOBYTE(v37) = 1;
          v38 = v40[2];
          v42 = v40[1] & 0xF;
          v43 = v40[3];
        }
      }
      else
      {
        if ( v52 <= v33 )
        {
          v42 = v40[2] & 0xF;
          v53 = v41;
          if ( (unsigned int)(unsigned __int8)v40[7] + 8 <= v41 )
            v53 = (unsigned __int8)v40[7] + 8;
          v33 = v40 + 13;
          v37 = (unsigned __int64)&v40[v53];
          if ( (unsigned __int64)(v40 + 13) > v37 )
            v56 = 0;
          else
            v56 = v40[12];
          if ( (unsigned __int64)(v40 + 14) <= v37 )
            v43 = *v33;
          LOBYTE(v37) = 1;
        }
        v38 = v56;
      }
      if ( (_BYTE)v37 )
      {
        LOBYTE(v5) = v38;
        v54 = v43;
      }
      else
      {
LABEL_103:
        v42 = 0;
        v54 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v33,
        v37,
        (unsigned int)&v68,
        a2,
        *(_DWORD *)(a2 + 48),
        v51,
        v39,
        v42,
        v5,
        v54,
        a2);
    }
  }
LABEL_108:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v11;
}
