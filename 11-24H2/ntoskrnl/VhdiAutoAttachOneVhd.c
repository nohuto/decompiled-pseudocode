/*
 * XREFs of VhdiAutoAttachOneVhd @ 0x14082A69C
 * Callers:
 *     VhdDeferredAutoAttachVirtualDisks @ 0x1406A2788 (VhdDeferredAutoAttachVirtualDisks.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C5F1A4 (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     McTemplateK0hzr0d_EtwWriteTransfer @ 0x1406A26F8 (McTemplateK0hzr0d_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     VhdiMountVhdFile @ 0x14082A898 (VhdiMountVhdFile.c)
 *     RtlAcquirePrivilege @ 0x1409A82D4 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x140A4850C (RtlReleasePrivilege.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall VhdiAutoAttachOneVhd(void *Src, size_t Size, _OWORD *a3, ULONG a4)
{
  unsigned int v4; // esi
  __int64 Pool2; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // r9
  ULONG Privilege; // [rsp+30h] [rbp-69h] BYREF
  PVOID ReturnedState; // [rsp+38h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-59h] BYREF
  PVOID *p_ReturnedState; // [rsp+60h] [rbp-39h]
  __int64 v21; // [rsp+68h] [rbp-31h]
  _DWORD *v22; // [rsp+70h] [rbp-29h]
  __int64 v23; // [rsp+78h] [rbp-21h]
  void *v24; // [rsp+80h] [rbp-19h]
  _DWORD v25[2]; // [rsp+88h] [rbp-11h] BYREF
  _OWORD *v26; // [rsp+90h] [rbp-9h]
  __int64 v27; // [rsp+98h] [rbp-1h]
  ULONG *p_Privilege; // [rsp+A0h] [rbp+7h]
  __int64 v29; // [rsp+A8h] [rbp+Fh]

  if ( Src )
  {
    v4 = Size;
    ReturnedState = 0LL;
    if ( PnpSetupOOBEInProgress && PnpSetupUpgradeInProgress )
    {
      Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)Size + 42LL, 0x42646856u);
      v9 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = a4;
        *(_OWORD *)(Pool2 + 20) = *a3;
        memmove((void *)(Pool2 + 36), Src, v4);
        v10 = (_QWORD *)qword_140E651D0;
        if ( *(PVOID **)qword_140E651D0 != &qword_140E651C8 )
          __fastfail(3u);
        *v9 = &qword_140E651C8;
        v9[1] = v10;
        *v10 = v9;
        qword_140E651D0 = (__int64)v9;
      }
    }
    else
    {
      Privilege = 28;
      v11 = RtlAcquirePrivilege(&Privilege, 1u, 0, &ReturnedState);
      LOBYTE(v15) = v11;
      if ( v11 < 0 || (v15 = VhdiMountVhdFile(Src, v4, a4, 0LL, a3), RtlReleasePrivilege(ReturnedState), v15 < 0) )
      {
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( *((_WORD *)Src + v16) );
          McTemplateK0hzr0d_EtwWriteTransfer(v13, v12, v14, v16, (__int64)Src, v15);
        }
        if ( (unsigned int)dword_140E06E48 > 5 && tlgKeywordOn((__int64)&dword_140E06E48, 0x400000000000LL) )
        {
          ReturnedState = (PVOID)0x2000000;
          p_ReturnedState = &ReturnedState;
          v21 = 8LL;
          v22 = v25;
          v23 = 2LL;
          p_Privilege = &Privilege;
          v24 = Src;
          v25[0] = v4 & 0xFFFFFFFE;
          v25[1] = 0;
          v26 = a3;
          v27 = 16LL;
          Privilege = a4;
          v29 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06E48,
            (unsigned __int8 *)byte_140059BCB,
            0LL,
            0LL,
            7u,
            &v19);
        }
      }
    }
  }
}
