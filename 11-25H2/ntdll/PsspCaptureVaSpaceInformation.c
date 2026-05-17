/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x1800CA018
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800C7F80 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspCaptureVaSpaceInformation2 @ 0x1800CA11C (PsspCaptureVaSpaceInformation2.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PsspCaptureVaSpaceInformation(int a1, __int64 a2, int a3)
{
  int v3; // r9d
  __int64 v4; // rax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF

  v3 = 0;
  v4 = 0x4000LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( (a3 & 0x4000) == 0 )
    return PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)ZwQueryVirtualMemory, a2, a3);
  while ( 1 )
  {
    *(_QWORD *)&v11 = v4;
    if ( !v4 )
      break;
    *((_QWORD *)&v10 + 1) = 0LL;
    v3 = ZwAllocateVirtualMemory(-1LL, (char *)&v10 + 8, 0LL, &v11, 4096, 4);
    if ( v3 >= 0 )
    {
      DWORD2(v11) = 0;
      *(_DWORD *)(*((_QWORD *)&v10 + 1) + 4LL) = 0;
      goto LABEL_7;
    }
    v4 = v11 - 4096;
  }
  if ( v3 < 0 )
    return PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)ZwQueryVirtualMemory, a2, a3);
LABEL_7:
  *(_QWORD *)&v10 = a2;
  v8 = PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)PsspQueryVmBulkMode, (unsigned int)&v10, a3);
  ZwFreeVirtualMemory(-1LL, (char *)&v10 + 8, &v11, 0x8000LL);
  return v8;
}
