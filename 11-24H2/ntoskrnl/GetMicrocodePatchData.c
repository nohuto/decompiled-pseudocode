/*
 * XREFs of GetMicrocodePatchData @ 0x140662BB8
 * Callers:
 *     PrExtExportRecordData @ 0x140662904 (PrExtExportRecordData.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140662788 (Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrocodeInitLogging @ 0x140663090 (MicrocodeInitLogging.c)
 *     MicrocodePrePatchCheckAndLogging @ 0x140663168 (MicrocodePrePatchCheckAndLogging.c)
 *     IntelMicrocodeChecksumValidate @ 0x140663690 (IntelMicrocodeChecksumValidate.c)
 *     IntelMicrocodeGetRecordData @ 0x1406636DC (IntelMicrocodeGetRecordData.c)
 *     GetCpuManufacturer @ 0x1406638BC (GetCpuManufacturer.c)
 *     AMDMicrocodeGetRecordData @ 0x140663A28 (AMDMicrocodeGetRecordData.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall GetMicrocodePatchData(__int64 a1, unsigned __int64 a2, __int64 a3, void **a4)
{
  void *v4; // r14
  unsigned int v13; // r12d
  __int64 result; // rax
  unsigned int v15; // ebx
  bool v16; // zf
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // r9d
  size_t Size[4]; // [rsp+20h] [rbp-20h] BYREF
  void *Src; // [rsp+70h] [rbp+30h] BYREF

  Size[0] = 0LL;
  v4 = 0LL;
  Src = 0LL;
  _RAX = 1LL;
  __asm { cpuid }
  v13 = _RAX;
  if ( !a1 )
  {
    v15 = (unsigned __int8)GetCpuManufacturer(1LL) != 0 ? 2 : 0;
    if ( (unsigned __int8)GetCpuManufacturer(2LL) )
      v15 = (unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() != 0 ? 13 : 1;
    goto LABEL_17;
  }
  if ( a2 < 0x10 )
    return 3221225485LL;
  if ( a3 != *(_QWORD *)(a1 + 8) )
    return 3221225507LL;
  v15 = *(_DWORD *)a1;
  if ( (unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned __int8)GetCpuManufacturer(2LL) && v15 != 1 )
    {
      v16 = v15 == 13;
      goto LABEL_11;
    }
  }
  else if ( (unsigned __int8)GetCpuManufacturer(2LL) )
  {
    v16 = v15 == 1;
LABEL_11:
    if ( v16 )
      goto LABEL_12;
    return 3221225485LL;
  }
LABEL_12:
  if ( (unsigned __int8)GetCpuManufacturer(1LL) && v15 != 2 )
    return 3221225485LL;
LABEL_17:
  MicrocodeInitLogging(v13, v15);
  v17 = v15 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( !v18 )
    {
      if ( !(unsigned __int8)GetCpuManufacturer(1LL) )
        goto LABEL_22;
      v19 = __readmsr(0x8Bu) >> 32;
      if ( a1 )
      {
        if ( (int)IntelMicrocodeGetRecordData(a1, a2, Size, &Src) < 0 )
          goto LABEL_39;
        v4 = Src;
        result = IntelMicrocodeChecksumValidate(Src, LODWORD(Size[0]), v21, *((unsigned int *)Src + 1));
        if ( (int)result < 0 )
        {
          HIDWORD(qword_140EF7B00) = 8;
          return result;
        }
      }
      else
      {
        v22 = 0;
      }
      v20 = v22;
      goto LABEL_28;
    }
    if ( v18 != 11 || !(unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_22;
  }
  if ( !(unsigned __int8)GetCpuManufacturer(2LL) )
  {
LABEL_22:
    HIDWORD(qword_140EF7B00) = 8;
    return 3221225659LL;
  }
  LODWORD(v19) = __readmsr(0x8Bu);
  if ( !a1 )
  {
    v20 = 0LL;
    goto LABEL_28;
  }
  if ( (int)AMDMicrocodeGetRecordData(a1, a2, Size, &Src) < 0 )
  {
LABEL_39:
    HIDWORD(qword_140EF7B00) = 9;
    return 3221225659LL;
  }
  v4 = Src;
  v20 = *((unsigned int *)Src + 1);
LABEL_28:
  if ( (int)MicrocodePrePatchCheckAndLogging((unsigned int)v19, v20) < 0 )
    return 3221225659LL;
  if ( a1 )
    memmove(*a4, v4, Size[0]);
  return 0LL;
}
