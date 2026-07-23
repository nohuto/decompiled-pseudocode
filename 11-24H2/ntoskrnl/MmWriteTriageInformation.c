/*
 * XREFs of MmWriteTriageInformation @ 0x14067922C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x14058E2EC (IoFillTriageDumpBuffer.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1404213A0 (RtlGetNtProductType.c)
 *     ExVerifySuite @ 0x1404F4950 (ExVerifySuite.c)
 */

__int64 __fastcall MmWriteTriageInformation(_OWORD *a1)
{
  int v2; // ebx
  unsigned int v3; // ecx
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-50h]
  __int128 v6; // [rsp+30h] [rbp-40h]
  __int128 v7; // [rsp+40h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-20h]
  __int128 v9; // [rsp+60h] [rbp-10h]
  _NT_PRODUCT_TYPE NtProductType; // [rsp+80h] [rbp+10h] BYREF

  NtProductType = 0;
  v2 = VerifierTriageActionTaken;
  *(_QWORD *)&v5 = 0x5000000001LL;
  DWORD2(v5) = MmSpecialPoolTag;
  RtlGetNtProductType(&NtProductType);
  if ( NtProductType != NtProductWinNt
    || ExVerifySuite(EmbeddedNT)
    || ExVerifySuite(EmbeddedRestricted)
    || ExVerifySuite(SecurityAppliance) )
  {
    v2 |= 0x80000000;
  }
  LODWORD(v6) = MmVerifierData;
  v3 = (unsigned __int8)MiFlags;
  *((_QWORD *)&v6 + 1) = qword_140E37698;
  *(_QWORD *)&v7 = qword_140E2CB88;
  *((_QWORD *)&v7 + 1) = qword_140E376A0;
  *(_QWORD *)&v8 = qword_140E37690;
  *((_QWORD *)&v8 + 1) = qword_140E3D880;
  *(_QWORD *)&v9 = qword_140E3CF00;
  result = qword_140E3CF08;
  HIDWORD(v5) = v2;
  *a1 = v5;
  DWORD1(v6) = (v3 >> 1) & 1;
  a1[1] = v6;
  *((_QWORD *)&v9 + 1) = result;
  a1[2] = v7;
  a1[3] = v8;
  a1[4] = v9;
  return result;
}
