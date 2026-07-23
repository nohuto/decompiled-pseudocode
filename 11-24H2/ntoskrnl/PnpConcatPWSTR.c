/*
 * XREFs of PnpConcatPWSTR @ 0x1408E1D40
 * Callers:
 *     PipCheckForDenyExecute @ 0x1408B02F4 (PipCheckForDenyExecute.c)
 *     PiDqOpenUserObjectRegKey @ 0x1408E1780 (PiDqOpenUserObjectRegKey.c)
 *     PiSwStopDestroy @ 0x1409BE704 (PiSwStopDestroy.c)
 *     PiSwInstanceInfoInit @ 0x1409F1CC0 (PiSwInstanceInfoInit.c)
 *     PiSwGetChildPdo @ 0x140AC1360 (PiSwGetChildPdo.c)
 * Callees:
 *     RtlStringCbCatW @ 0x140443D48 (RtlStringCbCatW.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpConcatPWSTR(unsigned __int64 a1, ULONG a2, PVOID *a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r11
  unsigned __int64 *v8; // rdi
  _WORD *v9; // rax
  unsigned __int64 i; // rdx
  NTSTATUS v11; // ebx
  size_t v12; // rbp
  _WORD *Pool2; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  NTSTRSAFE_PCWSTR *v16; // rdi
  unsigned __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v18 = a4;
  *a3 = 0LL;
  v6 = 0LL;
  v7 = 1LL;
  v8 = &v18;
  while ( v6 < a4 )
  {
    v9 = (_WORD *)*++v8;
    if ( *v8 )
    {
      if ( a1 > 0x7FFFFFFF )
        goto LABEL_22;
      for ( i = a1; i; --i )
      {
        if ( !*v9 )
          break;
        ++v9;
      }
      v11 = i == 0 ? 0xC000000D : 0;
      if ( !i )
        goto LABEL_24;
      v7 += (a1 - i) & -(__int64)(i != 0);
    }
    ++v6;
  }
  if ( v7 > a1 )
  {
LABEL_22:
    v11 = -1073741811;
    goto LABEL_24;
  }
  v12 = 2 * v7;
  if ( !is_mul_ok(v7, 2uLL) )
  {
    v11 = -1073741675;
    goto LABEL_24;
  }
  v11 = 0;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, 2 * v7, a2);
  *a3 = Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741670;
LABEL_24:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, a2);
      *a3 = 0LL;
    }
    return (unsigned int)v11;
  }
  *Pool2 = 0;
  v14 = v18;
  v15 = 0LL;
  if ( v18 )
  {
    v16 = (NTSTRSAFE_PCWSTR *)&v18;
    do
    {
      if ( *++v16 )
      {
        v11 = RtlStringCbCatW((NTSTRSAFE_PWSTR)*a3, v12, *v16);
        if ( v11 < 0 )
          goto LABEL_24;
        v14 = v18;
      }
      ++v15;
    }
    while ( v15 < v14 );
  }
  return (unsigned int)v11;
}
