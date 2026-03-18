/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x14003DF34
 * Callers:
 *     ?Free@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14003DDAC (-Free@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r11
  int v3; // r8d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r10

  v2 = a1[2];
  v3 = a2;
  v5 = a1[1] ^ v2;
  if ( !a2 || a2 < v5 || a2 >= v5 + 909312 )
    return 0LL;
  v6 = a2 & 0xFFF;
  v7 = ((a2 & 0xFFF) * (unsigned __int128)0x27350B88127350B9uLL) >> 64;
  v8 = (v7 + (((unsigned __int64)(unsigned int)v6 - v7) >> 1)) >> 11;
  if ( v6 == 3552 * v8 )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(a1[3] ^ v2),
                            v8 + ((unsigned int)(v3 - (*((_DWORD *)a1 + 4) ^ *((_DWORD *)a1 + 2))) >> 12)) != 0);
  else
    return 3LL;
}
