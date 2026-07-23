/*
 * XREFs of IoWMIExecuteMethod @ 0x140A985C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     WmipQuerySetExecuteSI @ 0x1409B2A54 (WmipQuerySetExecuteSI.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIExecuteMethod(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        ULONG MethodId,
        ULONG InBufferSize,
        PULONG OutBufferSize,
        PUCHAR InOutBuffer)
{
  PULONG v6; // r14
  NTSTATUS SetExecuteSI; // edi
  ULONG v11; // r10d
  unsigned int v12; // esi
  unsigned int v13; // r15d
  unsigned int v14; // esi
  __int64 Pool2; // rax
  _DWORD *v16; // rbx
  ULONG v17; // eax
  PUCHAR v19; // rcx
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v6 = OutBufferSize;
  SetExecuteSI = -1073741670;
  v11 = *OutBufferSize;
  if ( InBufferSize > *OutBufferSize )
    v11 = InBufferSize;
  if ( (unsigned int)InstanceName->Length + 77 >= (unsigned int)InstanceName->Length + 70 )
  {
    v12 = (InstanceName->Length + 77) & 0xFFFFFFF8;
    v13 = v12;
    if ( v11 <= ~v12 )
    {
      v14 = v11 + v12;
      Pool2 = ExAllocatePool2(0x40uLL, v14, 0x70696D57u);
      v16 = (_DWORD *)Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 16) = 0LL;
        *(_DWORD *)(Pool2 + 12) = 0;
        *(_DWORD *)(Pool2 + 44) = 0x8000;
        *(_DWORD *)Pool2 = v14;
        *(_DWORD *)(Pool2 + 56) = MethodId;
        *(_DWORD *)(Pool2 + 48) = 68;
        *(_DWORD *)(Pool2 + 60) = v13;
        *(_DWORD *)(Pool2 + 64) = InBufferSize;
        *(_WORD *)(Pool2 + 68) = InstanceName->Length;
        memmove((void *)(Pool2 + 70), InstanceName->Buffer, InstanceName->Length);
        memmove((char *)v16 + (unsigned int)v16[15], InOutBuffer, InBufferSize);
        LODWORD(v21) = *v16;
        SetExecuteSI = WmipQuerySetExecuteSI(DataBlockObject, 0LL, 0, 9u, (__int64)v16, v14, (unsigned int *)&v21);
        if ( SetExecuteSI >= 0 )
        {
          if ( (v16[11] & 0x20) != 0 )
          {
            v17 = v16[12] - v13;
          }
          else
          {
            v17 = v16[16];
            if ( *v6 >= v17 )
            {
              v19 = InOutBuffer;
              *v6 = v17;
              memmove(v19, (char *)v16 + (unsigned int)v16[15], (unsigned int)v16[16]);
              goto LABEL_10;
            }
          }
          SetExecuteSI = -1073741789;
          *v6 = (v17 + 7) & 0xFFFFFFF8;
        }
LABEL_10:
        ExFreePoolWithTag(v16, 0);
      }
    }
  }
  return SetExecuteSI;
}
