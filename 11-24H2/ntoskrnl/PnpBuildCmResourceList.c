/*
 * XREFs of PnpBuildCmResourceList @ 0x140A8FE84
 * Callers:
 *     IopAllocateBootResourcesInternal @ 0x140722E38 (IopAllocateBootResourcesInternal.c)
 *     PnpBuildCmResourceLists @ 0x140732364 (PnpBuildCmResourceLists.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopWriteResourceList @ 0x14071ED00 (IopWriteResourceList.c)
 *     IopParentToRawTranslation @ 0x14071F514 (IopParentToRawTranslation.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     IopCreateRegistryKeyEx @ 0x140A6AFFC (IopCreateRegistryKeyEx.c)
 *     IopChildToRootTranslation @ 0x140A9031C (IopChildToRootTranslation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PnpBuildCmResourceList(__int64 a1, int a2)
{
  __int64 v2; // r12
  _DWORD *v3; // rbx
  __int64 v4; // rdi
  int v5; // esi
  __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  _DWORD *v12; // r15
  _DWORD *Pool2; // rax
  _DWORD *v14; // r13
  __int64 v15; // r14
  int v16; // eax
  _DWORD *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  _WORD *v28; // rsi
  int v29; // edi
  __int16 v30; // ax
  int v31; // eax
  char *v32; // rsi
  int v33; // eax
  HANDLE v34; // rsi
  ULONG v35; // r14d
  int v36; // [rsp+38h] [rbp-D0h]
  int v37; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD Destination[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-B0h]
  _QWORD v40[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v41[2]; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  __int64 v44; // [rsp+90h] [rbp-78h]
  __int128 v45; // [rsp+98h] [rbp-70h] BYREF
  char v46; // [rsp+A8h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v4 = a1;
  v41[0] = a1;
  v37 = a2;
  v5 = 0;
  Handle = 0LL;
  v6 = *(__int64 **)(v2 + 16);
  P = 0LL;
  v7 = *v6;
  v44 = v7;
  v8 = *(_DWORD *)(v7 + 20);
  if ( !v8 )
    goto LABEL_42;
  v9 = (__int64 *)(v7 + 24);
  v10 = v8;
  do
  {
    v11 = *v9++;
    v5 += *(_DWORD *)(v11 + 276) + 1;
    --v10;
  }
  while ( v10 );
  if ( !v5 )
  {
LABEL_42:
    *(_DWORD *)(v4 + 56) = -1073741595;
    goto LABEL_43;
  }
  LODWORD(v39) = 20 * (v5 + 1);
  Destination[1] = ExAllocatePool2(0x100uLL, (unsigned int)v39, 0x20207050u);
  v12 = (_DWORD *)Destination[1];
  if ( !Destination[1] )
  {
LABEL_6:
    *(_DWORD *)(v4 + 56) = -1073741670;
LABEL_43:
    *(_QWORD *)(v4 + 48) = 0LL;
    goto LABEL_44;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, (unsigned int)(20 * (v5 + 1)), 0x20207050u);
  v14 = Pool2;
  if ( !Pool2 )
  {
    ExFreePoolWithTag((PVOID)Destination[1], 0);
    goto LABEL_6;
  }
  v15 = Destination[1] + 20LL;
  *(_DWORD *)Destination[1] = 1;
  v12[1] = *(_DWORD *)v2;
  v12[2] = *(_DWORD *)(v2 + 4);
  v12[3] = 65537;
  v12[4] = v5;
  *Pool2 = 1;
  Pool2[1] = *(_DWORD *)v2;
  v16 = *(_DWORD *)(v2 + 4);
  v17 = v14 + 5;
  v14[2] = v16;
  v18 = 0LL;
  v14[3] = 65537;
  v14[4] = v5;
  while ( 1 )
  {
    LODWORD(Destination[0]) = v18;
    if ( (unsigned int)v18 >= *(_DWORD *)(v44 + 20) )
      break;
    v19 = *(_QWORD *)(v44 + 8 * v18 + 24);
    if ( !*(_BYTE *)(v19 + 8) )
    {
      *(_OWORD *)v17 = *(_OWORD *)(v19 + 136);
      v17[4] = *(_DWORD *)(v19 + 152);
      *(_OWORD *)v15 = *(_OWORD *)(v19 + 136);
      v26 = *(_DWORD *)(v19 + 152);
      goto LABEL_24;
    }
    v20 = *(_QWORD *)(v19 + 32);
    v40[0] = v20;
    if ( *(_DWORD *)(v20 + 128) == 2 )
    {
      v21 = *(_QWORD *)(v20 + 112);
    }
    else
    {
      v36 = IopParentToRawTranslation(v20);
      if ( v36 < 0 )
        goto LABEL_30;
      v21 = *(_QWORD *)(v19 + 112);
      v20 = v40[0];
    }
    *(_OWORD *)v17 = *(_OWORD *)v21;
    v17[4] = *(_DWORD *)(v21 + 16);
    if ( *(_DWORD *)(v20 + 128) == 2 )
    {
      v25 = *(_QWORD *)(v20 + 112);
      *(_OWORD *)v15 = *(_OWORD *)v25;
      v26 = *(_DWORD *)(v25 + 16);
LABEL_24:
      *(_DWORD *)(v15 + 16) = v26;
      goto LABEL_25;
    }
    v22 = *(_QWORD *)(v19 + 72);
    if ( v22 )
      v23 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
    else
      LODWORD(v23) = 0;
    v36 = IopChildToRootTranslation(
            v23,
            *(_DWORD *)v19,
            *(_DWORD *)(v19 + 4),
            *(_DWORD *)(v19 + 80),
            v19 + 136,
            (__int64)&P);
    if ( v36 < 0 )
    {
LABEL_30:
      ExFreePoolWithTag(v12, 0);
      ExFreePoolWithTag(v14, 0);
      v31 = -1073741670;
      if ( v36 == -1073741267 )
        v31 = -1073741267;
      *(_DWORD *)(v4 + 56) = v31;
      goto LABEL_44;
    }
    v24 = P;
    *(_OWORD *)v15 = *(_OWORD *)P;
    *(_DWORD *)(v15 + 16) = v24[4];
    ExFreePoolWithTag(v24, 0);
LABEL_25:
    v27 = *(_DWORD *)(v19 + 276);
    v17 += 5;
    v15 += 20LL;
    if ( v27 )
    {
      v28 = (_WORD *)(*(_QWORD *)(v19 + 280) + 8LL);
      v29 = v27;
      do
      {
        *(_BYTE *)v17 = -127;
        *(_BYTE *)v15 = -127;
        *((_BYTE *)v17 + 1) = 1;
        *(_BYTE *)(v15 + 1) = 1;
        v30 = *(v28 - 2);
        *((_WORD *)v17 + 1) = v30;
        *(_WORD *)(v15 + 2) = v30;
        memmove(v17 + 1, v28, 0xCuLL);
        memmove((void *)(v15 + 4), v28, 0xCuLL);
        v28 += 16;
        v17 += 5;
        v15 += 20LL;
        --v29;
      }
      while ( v29 );
      v4 = v41[0];
      v12 = (_DWORD *)Destination[1];
    }
    v18 = (unsigned int)(LODWORD(Destination[0]) + 1);
  }
  if ( v37 )
  {
    v32 = *(char **)v4;
    if ( (int)IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL) >= 0 )
    {
      v37 = 0;
      v40[1] = L"PnP Manager";
      v40[0] = 1572886LL;
      v41[1] = L"PnpManager";
      v41[0] = 1441812LL;
      *(_OWORD *)&Destination[1] = 0LL;
      v33 = ObQueryNameStringMode(v32, (__int64)&v45, 0x200u, &v37, 0);
      v34 = Handle;
      if ( v33 >= 0 )
      {
        WORD1(v45) = 496;
        if ( !(_WORD)v45 )
          *((_QWORD *)&v45 + 1) = &v46;
        *(_OWORD *)&Destination[1] = v45;
        RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Raw");
        v35 = v39;
        if ( (int)IopWriteResourceList(
                    (__int64)v34,
                    (__int64)v40,
                    (__int64)v41,
                    (UNICODE_STRING *)&Destination[1],
                    v14,
                    v39) >= 0 )
        {
          *(_OWORD *)&Destination[1] = v45;
          RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Translated");
          IopWriteResourceList((__int64)v34, (__int64)v40, (__int64)v41, (UNICODE_STRING *)&Destination[1], v12, v35);
        }
      }
      ZwClose(v34);
    }
  }
  *(_QWORD *)(v4 + 48) = v12;
  v3 = v14;
LABEL_44:
  *(_QWORD *)(v4 + 40) = v3;
}
