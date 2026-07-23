/*
 * XREFs of NtQuerySecurityPolicy @ 0x14088D400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SepCaptureUnicodeStringArray @ 0x14088CF60 (SepCaptureUnicodeStringArray.c)
 *     SepReleaseUnicodeStringArray @ 0x14088D350 (SepReleaseUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQuerySecurityPolicy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        volatile void *a5,
        unsigned int *Address)
{
  __int64 v7; // r15
  void *Pool2; // rdi
  char PreviousMode; // si
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned int *v14; // r14
  void *v15; // r15
  unsigned int Length; // [rsp+44h] [rbp-54h]
  void *v18; // [rsp+58h] [rbp-40h] BYREF
  void *v19; // [rsp+60h] [rbp-38h] BYREF
  void *v20; // [rsp+68h] [rbp-30h] BYREF

  v7 = a3;
  v18 = 0LL;
  v19 = 0LL;
  Pool2 = 0LL;
  v20 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(a3) = PreviousMode;
  v11 = SepCaptureUnicodeStringArray(a1, 1u, a3, &v18);
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = PreviousMode;
    v11 = SepCaptureUnicodeStringArray(a2, 1u, v12, &v19);
    if ( v11 >= 0 )
    {
      LOBYTE(v13) = PreviousMode;
      v11 = SepCaptureUnicodeStringArray(v7, 1u, v13, &v20);
      if ( v11 >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(a4, 4uLL, 4u);
          v14 = Address;
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          Length = *Address;
          if ( !*Address )
          {
            v11 = -1073741811;
            goto LABEL_18;
          }
          ProbeForWrite(Address, 4uLL, 4u);
          v15 = (void *)a5;
          if ( a5 )
          {
            ProbeForWrite(a5, Length, 1u);
            Pool2 = (void *)ExAllocatePool2(0x101uLL, Length, 0x20206553u);
            if ( !Pool2 )
            {
              v11 = -1073741670;
              goto LABEL_18;
            }
          }
        }
        else
        {
          v15 = (void *)a5;
          Pool2 = (void *)a5;
          v14 = Address;
          Length = *Address;
        }
        if ( qword_140F04BB0 )
        {
          if ( Pool2 && !Length )
            v11 = -1073741811;
          else
            v11 = guard_dispatch_icall_no_overrides(v18, v19);
        }
        else
        {
          v11 = -1073741637;
        }
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
        {
          *a4 = 0;
          *v14 = Length;
          if ( v15 )
          {
            if ( PreviousMode == 1 && v11 >= 0 )
              memmove(v15, Pool2, Length);
          }
        }
      }
    }
  }
LABEL_18:
  SepReleaseUnicodeStringArray(v18, PreviousMode);
  SepReleaseUnicodeStringArray(v19, PreviousMode);
  SepReleaseUnicodeStringArray(v20, PreviousMode);
  if ( Pool2 && PreviousMode == 1 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}
