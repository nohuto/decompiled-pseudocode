/*
 * XREFs of MxInsertFreePages @ 0x140C41B20
 * Callers:
 *     MxCreateFreePfns @ 0x140C4131C (MxCreateFreePfns.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x1403FA42C (MiRestrictRangeToNode.c)
 *     MiCreateInitialLargeLeafPfns @ 0x140443314 (MiCreateInitialLargeLeafPfns.c)
 *     MiDetermineNewPfnHeatState @ 0x140450848 (MiDetermineNewPfnHeatState.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14045DDAC (MiInitializeAllResidentPageBasePfns.c)
 *     MiCreateInitialPfns @ 0x140660920 (MiCreateInitialPfns.c)
 *     MiCreatePfnTemplate @ 0x1406609D0 (MiCreatePfnTemplate.c)
 */

__int64 __fastcall MxInsertFreePages(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3, unsigned int a4)
{
  _OWORD *v4; // r14
  __int64 result; // rax
  ULONG_PTR v7; // r15
  ULONG_PTR v8; // rsi
  __int64 i; // rbp
  unsigned int v10; // ebx
  ULONG_PTR v11; // rdi
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  unsigned __int8 v15; // bl
  _OWORD v16[6]; // [rsp+40h] [rbp-68h] BYREF
  int v17; // [rsp+B0h] [rbp+8h]

  memset(v16, 0, 48);
  v4 = 0LL;
  result = a4;
  v7 = a2;
  v8 = BugCheckParameter2;
  for ( i = 48 * BugCheckParameter2 - 0x220000000000LL; v7; v7 -= v11 )
  {
    if ( (_DWORD)result )
      v10 = 3;
    else
      v10 = (KeFeatureBits & 0x2000000000LL) == 0;
    v11 = 1LL;
    while ( v10 < 4 )
    {
      v11 = MiPageSizes[v10];
      if ( ((v11 - 1) & v8) == 0 && v7 >= v11 && MiRestrictRangeToNode(v8, v7) >= v11 )
      {
        v11 = MiPageSizes[v10];
        v12 = MiPageToNode(v8);
        v13 = MiDetermineNewPfnHeatState(0, v10, qword_140E389D0 + 57216LL * v12);
        v14 = a3 & 0xFFFFFBFF;
        a3 |= 0x400u;
        if ( !v13 )
          a3 = v14;
        if ( v11 == 1 )
        {
          if ( !v4 )
          {
            v4 = v16;
            MiCreatePfnTemplate((__int64)v16, 0, 0);
          }
          if ( a3 == 1 )
          {
            v17 = *((_DWORD *)v4 + 8);
            BYTE2(v17) &= 0xF8u;
            *((_DWORD *)v4 + 8) = v17;
          }
          MiCreateInitialPfns(i, 1LL, (__int64 *)v4);
        }
        else
        {
          MiInitializeAllResidentPageBasePfns((unsigned __int16 *)&MiSystemPartition, v8, v11, v10, 1, v13 == 0, 0);
          MiCreateInitialLargeLeafPfns(v8, v11, v10, 1, 0, 0);
        }
        v15 = MiLockPageInline(i);
        MiInsertPageInFreeOrZeroedList(v8, a3);
        MiUnlockPage(i, v15);
        break;
      }
      ++v10;
    }
    v8 += v11;
    i += 48 * v11;
    result = a4;
  }
  return result;
}
