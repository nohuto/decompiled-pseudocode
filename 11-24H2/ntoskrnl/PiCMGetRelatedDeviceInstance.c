/*
 * XREFs of PiCMGetRelatedDeviceInstance @ 0x1408BC0A0
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x140412250 (StringExHandleOtherFlagsW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     PiGetRelatedDevice @ 0x1408BC818 (PiGetRelatedDevice.c)
 *     PiCMReturnBufferResultData @ 0x1408C3020 (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceParent @ 0x140928AD8 (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x140928D54 (_CmIsRootDevice.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetRelatedDeviceInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v6; // rdi
  wchar_t *Pool2; // rbp
  int v9; // r12d
  _BYTE *v10; // r14
  int v11; // eax
  const WCHAR *v12; // r15
  NTSTATUS inited; // ebx
  unsigned int v14; // esi
  __int64 v15; // rcx
  int v16; // r8d
  const WCHAR *v17; // rax
  int v18; // r9d
  const WCHAR *v19; // rdx
  WCHAR v20; // ax
  NTSTATUS v21; // eax
  wchar_t *v22; // rax
  int v23; // esi
  unsigned int v25; // edi
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  size_t v28; // r10
  size_t v29; // r8
  wchar_t *v30; // rcx
  wchar_t v31; // ax
  NTSTATUS DeviceParent; // eax
  unsigned int v33; // [rsp+50h] [rbp-78h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-70h] BYREF
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+60h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-60h] BYREF
  __int128 v37; // [rsp+78h] [rbp-50h] BYREF
  __int128 P; // [rsp+88h] [rbp-40h]
  __int64 v39; // [rsp+98h] [rbp-30h]

  v6 = a3;
  v37 = 0LL;
  v39 = 0LL;
  Pool2 = 0LL;
  v9 = 0;
  v10 = 0LL;
  P = 0LL;
  *a6 = 0;
  DestinationString = 0LL;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, &v37);
  v12 = (const WCHAR *)P;
  inited = v11;
  if ( v11 < 0 )
    goto LABEL_40;
  if ( !(_QWORD)P || *(_QWORD *)((char *)&v37 + 4) != 0x100000000LL || !v6 || a4 < 0x14 )
    goto LABEL_66;
  v14 = 0;
  if ( a4 - 20 >= 2 )
    v14 = a4 - 20;
  if ( v14 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v14, 0x34706E50u);
    if ( !Pool2 )
      inited = -1073741670;
    if ( inited < 0 )
      goto LABEL_27;
  }
  v15 = 200LL;
  v16 = 0;
  v17 = v12;
  v18 = 1;
  while ( *v17 )
  {
    ++v17;
    if ( !--v15 )
    {
LABEL_15:
      inited = -1073741773;
      goto LABEL_27;
    }
  }
  v19 = v12;
  while ( 1 )
  {
    v20 = *v19;
    if ( !*v19 )
      break;
    if ( (unsigned __int16)(v20 - 33) > 0x5Eu || v20 == 44 )
      goto LABEL_15;
    if ( v20 == 92 )
    {
      if ( !v16 )
        goto LABEL_15;
      ++v18;
      v16 = 0;
      ++v19;
    }
    else
    {
      ++v16;
      ++v19;
    }
  }
  if ( !v16 )
  {
    inited = -1073741773;
    goto LABEL_27;
  }
  if ( v18 != 3 )
  {
    inited = -1073741773;
    goto LABEL_27;
  }
  if ( HIDWORD(P) == 2 )
  {
    v25 = 2;
    goto LABEL_47;
  }
  if ( HIDWORD(P) == 1 )
  {
    v33 = v14 >> 1;
    DeviceParent = CmGetDeviceParent(*(_QWORD *)&PiPnpRtlCtx, v12, Pool2, &v33);
    v9 = v33;
    inited = DeviceParent;
    goto LABEL_34;
  }
  if ( HIDWORD(P) != 3 )
  {
LABEL_66:
    inited = -1073741811;
    goto LABEL_27;
  }
  if ( (unsigned __int8)CmIsRootDevice(v12) )
  {
    inited = -1073741810;
    goto LABEL_27;
  }
  v25 = 3;
LABEL_47:
  inited = RtlInitUnicodeStringEx(&DestinationString, v12);
  if ( inited >= 0 )
  {
    v33 = 400;
    v26 = ExAllocatePool2(0x100uLL, 0x190uLL, 0x34706E50u);
    v10 = (_BYTE *)v26;
    if ( !v26 )
    {
      inited = -1073741670;
      goto LABEL_27;
    }
    inited = PiGetRelatedDevice(&DestinationString, v26, &v33, v25);
    if ( inited >= 0 )
    {
      v27 = (unsigned __int64)v14 >> 1;
      v28 = v14;
      if ( v27 )
      {
        v29 = 2147483646 - v27;
        v30 = Pool2;
        do
        {
          if ( !(v29 + v27) )
            break;
          v31 = *(wchar_t *)((char *)v30 + v10 - (_BYTE *)Pool2);
          if ( !v31 )
            break;
          *v30++ = v31;
          --v27;
        }
        while ( v27 );
        v22 = v30 - 1;
        v23 = -2147483643;
        if ( v27 )
        {
          v22 = v30;
          v23 = 0;
        }
        *v22 = 0;
        inited = v23;
        if ( v23 < 0 && v28 )
          StringExHandleOtherFlagsW(Pool2, v28, v29, &ppszDestEnd, &pcchRemaining, 0x800u);
        if ( v23 == -2147483643 )
          inited = -1073741789;
      }
      else
      {
        inited = -1073741811;
      }
      v6 = a3;
      v9 = (v33 >> 1) + 1;
LABEL_34:
      if ( inited >= 0 )
      {
        v21 = PiCMReturnBufferResultData(
                (unsigned int)inited,
                (unsigned int)(2 * v9),
                0LL,
                Pool2,
                2 * v9,
                v39,
                v6,
                a4,
                a6);
        goto LABEL_36;
      }
    }
  }
LABEL_27:
  v21 = PiCMReturnBufferResultData((unsigned int)inited, (unsigned int)(2 * v9), 0LL, 0LL, 0, v39, a3, a4, a6);
LABEL_36:
  inited = v21;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_40:
  if ( v12 && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag((PVOID)P, 0);
  return (unsigned int)inited;
}
