/*
 * XREFs of MicrocodeUpdate @ 0x140663208
 * Callers:
 *     PrExtApplyPatch @ 0x1404CAD34 (PrExtApplyPatch.c)
 * Callees:
 *     HviIsHypervisorVendorMicrosoft @ 0x140662690 (HviIsHypervisorVendorMicrosoft.c)
 *     Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140662788 (Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrocodeInitLogging @ 0x140663090 (MicrocodeInitLogging.c)
 *     MicrocodePrePatchCheckAndLogging @ 0x140663168 (MicrocodePrePatchCheckAndLogging.c)
 *     IntelMicrocodeChecksumValidate @ 0x140663690 (IntelMicrocodeChecksumValidate.c)
 *     IntelMicrocodeGetRecordData @ 0x1406636DC (IntelMicrocodeGetRecordData.c)
 *     GetCpuManufacturer @ 0x1406638BC (GetCpuManufacturer.c)
 *     AMDMicrocodeGetRecordData @ 0x140663A28 (AMDMicrocodeGetRecordData.c)
 */

__int64 __fastcall MicrocodeUpdate(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rdi
  int v12; // r12d
  __int64 result; // rax
  int v14; // esi
  int v15; // esi
  unsigned __int64 v16; // rax
  unsigned int v17; // ebx
  unsigned int v18; // r9d
  int v19; // r9d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // r8
  unsigned int v23; // r9d
  unsigned int v29[8]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp+48h] BYREF

  *(_QWORD *)v29 = 0LL;
  v4 = 0LL;
  v30 = 0LL;
  _RAX = 1LL;
  __asm { cpuid }
  v12 = _RAX;
  if ( HviIsHypervisorVendorMicrosoft() )
    return 3224698886LL;
  MicrocodeInitLogging(v12, a3);
  v14 = a3 - 1;
  if ( !v14 )
  {
LABEL_7:
    if ( !(unsigned __int8)GetCpuManufacturer(2LL) )
    {
LABEL_8:
      HIDWORD(qword_140EF7B00) = 8;
      return 3221225659LL;
    }
    v16 = __readmsr(0x8Bu);
    v17 = v16;
    if ( !a1 )
    {
      v18 = 0;
      goto LABEL_14;
    }
    if ( (int)AMDMicrocodeGetRecordData(a1, a2, v29, &v30) >= 0 )
    {
      v4 = v30;
      v18 = *(_DWORD *)(v30 + 4);
LABEL_14:
      if ( (int)MicrocodePrePatchCheckAndLogging(v17, v18) < 0 )
        return 3221225659LL;
      __writemsr(0xC0010020, v4);
      v20 = __readmsr(0x8Bu);
      goto LABEL_16;
    }
LABEL_26:
    HIDWORD(qword_140EF7B00) = 9;
    return 3221225659LL;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 != 11 || !(unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)GetCpuManufacturer(1LL) )
    goto LABEL_8;
  v21 = __readmsr(0x8Bu) >> 32;
  if ( a1 )
  {
    if ( (int)IntelMicrocodeGetRecordData(a1, a2, v29, &v30) < 0 )
      goto LABEL_26;
    v4 = v30;
    result = IntelMicrocodeChecksumValidate(v30, v29[0], v22, *(unsigned int *)(v30 + 4));
    if ( (int)result < 0 )
    {
      HIDWORD(qword_140EF7B00) = 8;
      return result;
    }
  }
  else
  {
    v23 = 0;
  }
  if ( (int)MicrocodePrePatchCheckAndLogging(v21, v23) < 0 )
    return 3221225659LL;
  __writemsr(0x79u, v4 + 48);
  __writemsr(0x8Bu, 0LL);
  _RAX = 1LL;
  __asm { cpuid }
  v20 = __readmsr(0x8Bu) >> 32;
LABEL_16:
  DWORD2(xmmword_140EF7AF0) = v20;
  if ( v19 == (_DWORD)v20 )
  {
    HIDWORD(qword_140EF7B00) = 0;
    return 0LL;
  }
  else
  {
    HIDWORD(qword_140EF7B00) = 3;
    return 3221225534LL;
  }
}
