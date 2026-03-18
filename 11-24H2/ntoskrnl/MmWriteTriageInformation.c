/*
 * XREFs of MmWriteTriageInformation @ 0x14067804C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1405912CC (IoFillTriageDumpBuffer.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14042F1D0 (RtlGetNtProductType.c)
 *     ExVerifySuite @ 0x1404F7070 (ExVerifySuite.c)
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
  int v10; // [rsp+80h] [rbp+10h] BYREF

  v10 = 0;
  v2 = VerifierTriageActionTaken;
  *(_QWORD *)&v5 = 0x5000000001LL;
  DWORD2(v5) = MmSpecialPoolTag;
  RtlGetNtProductType(&v10);
  if ( v10 != 1 || ExVerifySuite(EmbeddedNT) || ExVerifySuite(EmbeddedRestricted) || ExVerifySuite(SecurityAppliance) )
    v2 |= 0x80000000;
  LODWORD(v6) = MmVerifierData;
  v3 = (unsigned __int8)MiFlags;
  *((_QWORD *)&v6 + 1) = qword_140E37558;
  *(_QWORD *)&v7 = qword_140E2CA48;
  *((_QWORD *)&v7 + 1) = qword_140E37560;
  *(_QWORD *)&v8 = qword_140E37550;
  *((_QWORD *)&v8 + 1) = qword_140E3D740;
  *(_QWORD *)&v9 = qword_140E3CDC0;
  result = qword_140E3CDC8;
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
