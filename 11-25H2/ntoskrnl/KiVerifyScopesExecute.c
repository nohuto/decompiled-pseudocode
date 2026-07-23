/*
 * XREFs of KiVerifyScopesExecute @ 0x140C19390
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KiVerifyPdata @ 0x140C19254 (KiVerifyPdata.c)
 */

void __fastcall KiVerifyScopesExecute(PVOID Parameter)
{
  int v1; // ebx
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 (__fastcall **v3)(); // rdi
  int v4; // esi
  __int64 (__fastcall *v5)(); // rax
  ULONG_PTR v6; // rcx
  unsigned __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int128 v8; // [rsp+38h] [rbp-28h]
  ULONG_PTR v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+54h] [rbp-Ch]

  v9 = 0LL;
  v11 = 0;
  v1 = KiVerifyPass;
  v10 = 0;
  BugCheckParameter4 = 0LL;
  v8 = 0LL;
  v7 = 0xFEFFFFFFFFFFFFFFuLL;
  while ( v1 )
  {
    v3 = KiVerifyXcptRoutines;
    LODWORD(v8) = (v1 & 1) == 0;
    v4 = 0;
    while ( (__int64)v3 < (__int64)&qword_141007148 )
    {
      v5 = *v3;
      *(_QWORD *)((char *)&v8 + 4) = 0LL;
      ((void (__fastcall *)(unsigned __int64 *, ULONG_PTR))v5)(&v7, BugCheckParameter4);
      if ( !DWORD2(v8) )
        KeBugCheckEx(0x14Du, v4, v1, SDWORD1(v8), 0LL);
      ++v4;
      BugCheckParameter4 = __ROL8__(v9 ^ SDWORD1(v8), BYTE4(v8) & 0x3F);
      v9 = BugCheckParameter4;
      ++v3;
    }
    --v1;
  }
  if ( BugCheckParameter4 != 0x7493D5224FA9E69ALL )
    KeBugCheckEx(0x14Du, 0xFFFFFFFFuLL, 0LL, 0x7493D5224FA9E69AuLL, BugCheckParameter4);
  v6 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
  KiVerifyPdata(v6);
  KiVerifyPdata((ULONG_PTR)PsHalImageBase);
}
