/*
 * XREFs of DxgkDeviceIoctl @ 0x140070210
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x140054264 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?CheckTokenForVMGroupMembership@@YAJXZ @ 0x14006FB0C (-CheckTokenForVMGroupMembership@@YAJXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401ED020 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1401ED268 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 *     ?SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z @ 0x1401EDF40 (-SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x140207264 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x14034CE14 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1403AC8F8 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 */

__int64 __fastcall DxgkDeviceIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  DWORD LowPart; // ecx
  PVOID UserBuffer; // rbx
  ULONG Options; // r12d
  __int64 v7; // rsi
  DXGVIRTUALMACHINE **v8; // r14
  DxgkCompositionObject *v9; // r15
  const void *v10; // rax
  NTSTATUS v11; // eax
  DXGVIRTUALMACHINE ***Current; // rax
  int v13; // eax
  const wchar_t *v14; // r9
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  __int64 v19; // r8
  NTSTATUS Handle; // eax
  void *v21; // rax
  unsigned int v23; // [rsp+50h] [rbp-A8h]
  struct DXGPROCESS *v24; // [rsp+58h] [rbp-A0h] BYREF
  DxgkCompositionObject *v25; // [rsp+60h] [rbp-98h]
  DXGVIRTUALMACHINE *v26; // [rsp+68h] [rbp-90h]
  ULONG64 v27; // [rsp+70h] [rbp-88h]
  void *Src[3]; // [rsp+78h] [rbp-80h] BYREF
  ULONG64 Parameters; // [rsp+90h] [rbp-68h]
  _BYTE v30[24]; // [rsp+98h] [rbp-60h] BYREF
  struct _GUID v31; // [rsp+B0h] [rbp-48h] BYREF

  Src[2] = a2;
  v23 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  UserBuffer = a2->UserBuffer;
  v27 = (ULONG64)UserBuffer;
  Src[1] = UserBuffer;
  LODWORD(v24) = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (ULONG64)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( LowPart != 2310147 )
  {
    LODWORD(v7) = -1073741808;
    WdLogSingleEntry2(3LL, LowPart, -1073741808LL);
    WdLogGlobalForLineNumber = 1085;
    goto LABEL_46;
  }
  v8 = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  Src[0] = 0LL;
  v31 = 0LL;
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 942;
    LODWORD(v7) = -1073741637;
    goto LABEL_46;
  }
  if ( Options != 16 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 949;
LABEL_7:
    LODWORD(v7) = -1073741306;
    goto LABEL_46;
  }
  if ( (_DWORD)v24 != 8 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 956;
    goto LABEL_7;
  }
  v10 = (const void *)Parameters;
  if ( Parameters >= MmUserProbeAddress )
    v10 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v31, v10, 0x10uLL);
  ProbeForWrite(UserBuffer, 8uLL, 1u);
  v11 = CheckTokenForVMGroupMembership();
  v7 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 980;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CheckTokenForVMGroupMembership failed: 0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (int)v7 < 0 )
    goto LABEL_44;
  Current = (DXGVIRTUALMACHINE ***)DXGPROCESS::GetCurrent();
  v24 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    v18 = *((_DWORD *)Current + 102);
    if ( (v18 & 0x80) != 0 )
    {
      if ( (v18 & 0x100) != 0 )
        v8 = Current[74];
      else
        v8 = (DXGVIRTUALMACHINE **)((unsigned __int64)Current & -(__int64)((v18 & 0x80) != 0));
      LODWORD(v7) = 0;
      goto LABEL_34;
    }
    v7 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1028;
    v14 = L"Process is belonging to VM group, but not VMWP or VMMEM : 0x%I64x";
    goto LABEL_32;
  }
  v13 = DXGPROCESS::CreateDxgProcess(&v24, 0LL, 0LL, 1u, 0LL);
  v7 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(2LL, v13);
    WdLogGlobalForLineNumber = 993;
    v14 = L"DXGPROCESS::CreateDxgProcess failed: : 0x%I64x";
LABEL_32:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v14, v7, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_33;
  }
  v15 = *((_DWORD *)v24 + 102);
  if ( (v15 & 0x100) != 0 )
    v8 = (DXGVIRTUALMACHINE **)*((_QWORD *)v24 + 74);
  else
    v8 = (DXGVIRTUALMACHINE **)((unsigned __int64)v24 & -(__int64)((v15 & 0x80u) != 0));
  v16 = DXGPROCESSVMWP::InitializeVmwpProcess((DXGPROCESSVMWP *)v8, 0LL, 0LL, 0LL, 0LL, 0, 0LL);
  v7 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry1(2LL, v16);
    WdLogGlobalForLineNumber = 1003;
    v14 = L"DXGPROCESS::InitializeVmwpProcess failed: : 0x%I64x";
    goto LABEL_32;
  }
  v26 = v8[74];
  v17 = DXGVIRTUALMACHINE::InitializeVirtualMachine(v26, 0LL, 1u);
  v7 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(2LL, v17);
    WdLogGlobalForLineNumber = 1013;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to initalize virtual machine : 0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVIRTUALMACHINE::SetVmGuid(v26, &v31);
LABEL_33:
  if ( (int)v7 >= 0 )
  {
LABEL_34:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v30, (struct _KTHREAD **)v8[74] + 8);
    v9 = DXGVIRTUALMACHINE::ReferenceVailObject(v8[74]);
    v25 = v9;
    if ( !v9 )
    {
      LODWORD(v7) = -1073741275;
      WdLogSingleEntry1(1LL, -1073741275LL);
      WdLogGlobalForLineNumber = 1040;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"Failed to find Vail object: 0xI64x",
        -1073741275LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30);
    if ( (int)v7 >= 0 )
    {
      Handle = DxgkCompositionObject::CreateHandle(v9, 0xC0060000, v19, 1, Src);
      LODWORD(v7) = Handle;
      if ( Handle >= 0 )
      {
        v23 = 8;
      }
      else
      {
        WdLogSingleEntry1(3LL, Handle);
        WdLogGlobalForLineNumber = 1052;
      }
      if ( (int)v7 >= 0 )
      {
        v21 = (void *)v27;
        if ( v27 >= MmUserProbeAddress )
          v21 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v21, Src, 8uLL);
      }
    }
  }
LABEL_44:
  if ( v9 )
    ObfDereferenceObject(v9);
LABEL_46:
  a2->IoStatus.Information = v23;
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
