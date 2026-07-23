/*
 * XREFs of RtlpQueryInformationActivationContextDetailedInformation @ 0x1800489D0
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x1800475D0 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x180074330 (RtlpLocateActivationContextSection.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x180103B94 (RtlpCrackActivationContextStringSectionHeader.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryInformationActivationContextDetailedInformation(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // rsi
  int ActivationContextSection; // eax
  int v10; // r8d
  int v11; // ecx
  char *v12; // r8
  __int64 v13; // rax
  char *v14; // rdx
  unsigned __int64 v15; // rbx
  _DWORD *v16; // rbp
  char *v17; // rdi
  char *v18; // rdi
  char *v19; // rdi
  _BYTE *v21; // rcx
  int v22; // [rsp+20h] [rbp-78h]
  int v23; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+18h] BYREF

  v5 = a5;
  v24 = 0LL;
  v23 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( a1 )
  {
    ActivationContextSection = RtlpLocateActivationContextSection((_DWORD)a1, 0, 1, (unsigned int)&v24, (__int64)&v23);
    v11 = ActivationContextSection;
    if ( ActivationContextSection != -1072365567 )
    {
      if ( ActivationContextSection >> 31 == -1 )
        return (unsigned int)v11;
      v11 = RtlpCrackActivationContextStringSectionHeader(v24, v23, v10, (unsigned int)&a5, v22);
      if ( v11 < 0 )
        return (unsigned int)v11;
      v12 = (char *)a1 + (unsigned int)a1[6];
      v13 = 1LL;
      v14 = (char *)a1 + *((unsigned int *)v12 + 3);
      if ( *((_DWORD *)v12 + 2) > 1u )
      {
        v21 = v14 + 24;
        do
        {
          if ( (*v21 & 2) != 0 )
            break;
          v13 = (unsigned int)(v13 + 1);
          v21 += 24;
        }
        while ( (unsigned int)v13 < *((_DWORD *)v12 + 2) );
      }
      if ( (_DWORD)v13 == *((_DWORD *)v12 + 2) )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() found activation context data at %p with assembly roster that has no root\n",
          "RtlpQueryInformationActivationContextDetailedInformation",
          a1);
        return (unsigned int)-1072365565;
      }
      v15 = 64LL;
      v16 = (_DWORD *)((char *)a1 + *(unsigned int *)&v14[24 * v13 + 16]);
      if ( v16[5] )
        v15 = (unsigned int)v16[5] + 66LL;
      if ( v16[10] )
        v15 += (unsigned int)v16[10] + 2LL;
      if ( MEMORY[0x2C] )
        v15 += MEMORY[0x2C] + 2LL;
      if ( v15 <= a4 )
      {
        v17 = (char *)(a3 + 16);
        *a3 = a1[7];
        a3[1] = a1[2];
        a3[2] = *((_DWORD *)v12 + 2) - 1;
        a3[3] = v16[4];
        a3[4] = v16[5] >> 1;
        *((_QWORD *)a3 + 5) = 0LL;
        a3[5] = v16[9];
        a3[6] = v16[10] >> 1;
        *((_QWORD *)a3 + 6) = 0LL;
        a3[7] = MEMORY[0x28];
        a3[8] = MEMORY[0x2C] >> 1;
        *((_QWORD *)a3 + 7) = 0LL;
        if ( v16[5] )
        {
          memmove(a3 + 16, (const void *)(v24 + (unsigned int)v16[6]), (unsigned int)v16[5]);
          *((_QWORD *)a3 + 5) = v17;
          v18 = &v17[v16[5]];
          *(_WORD *)v18 = 0;
          v17 = v18 + 2;
        }
        if ( v16[10] )
        {
          memmove(v17, (const void *)(v24 + (unsigned int)v16[11]), (unsigned int)v16[10]);
          *((_QWORD *)a3 + 6) = v17;
          v19 = &v17[v16[10]];
          *(_WORD *)v19 = 0;
          v17 = v19 + 2;
        }
        if ( MEMORY[0x2C] )
        {
          memmove(v17, (const void *)MEMORY[0x30], MEMORY[0x2C]);
          *((_QWORD *)a3 + 7) = v17;
          *(_WORD *)&v17[MEMORY[0x2C]] = 0;
        }
        if ( v5 )
          *v5 = v15;
        return 0;
      }
      if ( v5 )
        *v5 = v15;
      return (unsigned int)-1073741789;
    }
  }
  if ( a4 < 0x40 )
    return (unsigned int)-1073741789;
  memset_thunk_772440563353939046(a3, 0, 0x40uLL);
  if ( v5 )
    *v5 = 64LL;
  return 0;
}
