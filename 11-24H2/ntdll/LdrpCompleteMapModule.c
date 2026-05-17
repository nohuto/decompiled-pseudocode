/*
 * XREFs of LdrpCompleteMapModule @ 0x180073340
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800649C0 (RtlAddressInSectionTable.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 *     LdrpRelocateImage @ 0x1800E4EBC (LdrpRelocateImage.c)
 *     LdrpLogError @ 0x1800FB40C (LdrpLogError.c)
 *     LdrpCorFixupImage @ 0x180109FB0 (LdrpCorFixupImage.c)
 *     LdrpCorValidateImage @ 0x18010DE14 (LdrpCorValidateImage.c)
 */

__int64 __fastcall LdrpCompleteMapModule(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  int v4; // esi
  __int64 v5; // rbp
  bool v9; // bl
  unsigned __int64 v10; // rdi
  __int16 v11; // ax
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rdi
  int v22; // r9d
  int v23; // ecx
  int v24; // eax
  int v25; // r9d
  char *v26; // rcx
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  v5 = 0LL;
  v27 = 0LL;
  v9 = 1;
  v10 = *(_QWORD *)(v3 + 48);
  if ( (v10 & 3) != 0 )
  {
    v10 &= 0xFFFFFFFFFFFFFFFCuLL;
    v9 = !(*(_BYTE *)(v3 + 48) & 1);
  }
  RtlImageNtHeaderEx(1, v10, 0LL, &v27);
  if ( !v27 )
  {
LABEL_13:
    if ( (*(_WORD *)(a2 + 22) & 0x2000) != 0 )
    {
      if ( *(char *)(a1 + 32) >= 0 || *(char *)(a2 + 94) < 0 )
      {
        if ( (*(_DWORD *)(v3 + 104) & 0x1000000) == 0 && (a3 == 1073741827 || a3 == 1073741878) )
        {
          v17 = *(_QWORD *)(v3 + 48);
          v18 = 2147353476LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v19 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v19 = 2147353476LL;
          v20 = 2147353477LL;
          if ( *(_BYTE *)v19 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v26 = (unsigned int)RtlGetCurrentServiceSessionId()
                ? (char *)NtCurrentPeb()->SharedData + 555
                : (char *)2147353477;
            if ( (*v26 & 0x20) != 0 )
            {
              LOBYTE(v25) = -1;
              LdrpLogEtwEvent(5264, v17, 255, v25, 0LL, 0LL);
            }
          }
          if ( a3 == 1073741827 && (v24 = LdrpRelocateImage(*(_QWORD *)(v3 + 48)), v4 = v24, v24 < 0) )
          {
            LdrpLogError((unsigned int)v24, 5264LL, 0LL, v3 + 72);
          }
          else
          {
            v21 = *(_QWORD *)(v3 + 48);
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              v18 = (__int64)NtCurrentPeb()->SharedData + 554;
            if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
            {
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v20 = (__int64)NtCurrentPeb()->SharedData + 555;
              if ( (*(_BYTE *)v20 & 0x20) != 0 )
              {
                LOBYTE(v22) = -1;
                LdrpLogEtwEvent(5265, v21, 255, v22, 0LL, 0LL);
              }
            }
          }
        }
      }
      else
      {
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrmap.c",
          1043,
          (__int64)"LdrpCompleteMapModule",
          0,
          "Could not validate the crypto signature for DLL %wZ\n",
          v3 + 72);
        return (unsigned int)-1073740760;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 104) &= ~4u;
    }
    return (unsigned int)v4;
  }
  v11 = *(_WORD *)(v27 + 24);
  if ( v11 == 267 )
  {
    if ( *(_DWORD *)(v27 + 116) > 0xEu )
    {
      v12 = *(unsigned int *)(v27 + 232);
      if ( (_DWORD)v12 )
        goto LABEL_8;
      v13 = -1073741822;
      goto LABEL_10;
    }
LABEL_41:
    v13 = -1073741811;
    goto LABEL_10;
  }
  if ( v11 != 523 || *(_DWORD *)(v27 + 132) <= 0xEu )
    goto LABEL_41;
  v12 = *(unsigned int *)(v27 + 248);
  if ( (_DWORD)v12 )
  {
LABEL_8:
    if ( v9 || (unsigned int)v12 < *(_DWORD *)(v27 + 84) )
    {
      v5 = v10 + v12;
      v13 = 0;
    }
    else
    {
      v5 = RtlAddressInSectionTable(v27, v10, v12);
      v16 = 0;
      if ( !v5 )
        v16 = -1073741811;
      v13 = v16;
    }
    goto LABEL_10;
  }
  v13 = -1073741822;
LABEL_10:
  v14 = 0LL;
  if ( v13 >= 0 )
    v14 = v5;
  if ( !v14 )
    goto LABEL_13;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
    return (unsigned int)-1073741701;
  v23 = *(_DWORD *)(v3 + 104) | 0x400000;
  *(_DWORD *)(v3 + 104) = v23;
  if ( (*(_BYTE *)(v14 + 16) & 1) == 0 )
    goto LABEL_13;
  *(_DWORD *)(v3 + 104) = v23 | 0x1000000;
  v4 = LdrpCorValidateImage(*(_QWORD *)(v3 + 48));
  if ( v4 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x200000) == 0 )
      goto LABEL_13;
    v4 = LdrpCorFixupImage(*(_QWORD *)(v3 + 48));
    if ( v4 >= 0 )
      goto LABEL_13;
  }
  return (unsigned int)v4;
}
