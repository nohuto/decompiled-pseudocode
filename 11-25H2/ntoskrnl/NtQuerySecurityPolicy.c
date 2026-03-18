/*
 * XREFs of NtQuerySecurityPolicy @ 0x140867390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SepReleaseUnicodeStringArray @ 0x140867664 (SepReleaseUnicodeStringArray.c)
 *     SepCaptureUnicodeStringArray @ 0x140867B30 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int *v15; // r14
  void *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int Length; // [rsp+44h] [rbp-54h]
  __int64 v21; // [rsp+58h] [rbp-40h] BYREF
  __int64 v22; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v23[3]; // [rsp+68h] [rbp-30h] BYREF

  v7 = a3;
  v21 = 0LL;
  v22 = 0LL;
  Pool2 = 0LL;
  v23[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(a3) = PreviousMode;
  v12 = SepCaptureUnicodeStringArray(a1, 1LL, a3, &v21);
  if ( v12 >= 0 )
  {
    LOBYTE(v13) = PreviousMode;
    v12 = SepCaptureUnicodeStringArray(a2, 1LL, v13, &v22);
    if ( v12 >= 0 )
    {
      LOBYTE(v14) = PreviousMode;
      v12 = SepCaptureUnicodeStringArray(v7, 1LL, v14, v23);
      if ( v12 >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(a4, 4uLL, 4u);
          v15 = Address;
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          Length = *Address;
          if ( !*Address )
          {
            v12 = -1073741811;
            goto LABEL_18;
          }
          ProbeForWrite(Address, 4uLL, 4u);
          v16 = (void *)a5;
          if ( a5 )
          {
            ProbeForWrite(a5, Length, 1u);
            Pool2 = (void *)ExAllocatePool2(0x101uLL);
            if ( !Pool2 )
            {
              v12 = -1073741670;
              goto LABEL_18;
            }
          }
        }
        else
        {
          v16 = (void *)a5;
          Pool2 = (void *)a5;
          v15 = Address;
          Length = *Address;
        }
        if ( qword_140F04530 )
        {
          if ( Pool2 && !Length )
            v12 = -1073741811;
          else
            v12 = guard_dispatch_icall_no_overrides(v21);
        }
        else
        {
          v12 = -1073741637;
        }
        if ( (int)(v12 + 0x80000000) < 0 || v12 == -1073741789 )
        {
          *a4 = 0;
          *v15 = Length;
          if ( v16 )
          {
            if ( PreviousMode == 1 && v12 >= 0 )
              memmove(v16, Pool2, Length);
          }
        }
      }
    }
  }
LABEL_18:
  LOBYTE(v11) = PreviousMode;
  SepReleaseUnicodeStringArray(v21, v11);
  LOBYTE(v17) = PreviousMode;
  SepReleaseUnicodeStringArray(v22, v17);
  LOBYTE(v18) = PreviousMode;
  SepReleaseUnicodeStringArray(v23[0], v18);
  if ( Pool2 && PreviousMode == 1 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v12;
}
