/*
 * XREFs of IopSetEnvironmentVariableSysEnv @ 0x140717380
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140717038 (IopIssueSystemEnvironmentRequest.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetEnvironmentVariableSysEnv(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        _WORD *a3,
        __int128 *a4,
        void *Src,
        unsigned int Size,
        int a7)
{
  __int64 v7; // rax
  __int64 v11; // rbp
  __int64 Pool2; // rax
  _DWORD *InputBuffer; // rdi
  unsigned int v14; // ebx
  __int128 v15; // xmm0

  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v11 = (unsigned int)(2 * v7 + 2);
  Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)v11 + Size + 32, 0x79536F49u);
  InputBuffer = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v15 = *a4;
    *(_DWORD *)Pool2 = 0;
    *(_OWORD *)(Pool2 + 16) = v15;
    *(_DWORD *)(Pool2 + 12) = a7;
    memmove((void *)(Pool2 + 32), a3, (unsigned int)v11);
    memmove((char *)InputBuffer + v11 + 32, Src, Size);
    InputBuffer[1] = v11 + 32;
    InputBuffer[2] = Size;
    v14 = IopIssueSystemEnvironmentRequest(
            0x520008u,
            1u,
            0LL,
            a2,
            InputBuffer,
            (unsigned int)v11 + Size + 32,
            0LL,
            0,
            0LL);
    ExFreePoolWithTag(InputBuffer, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v14;
}
