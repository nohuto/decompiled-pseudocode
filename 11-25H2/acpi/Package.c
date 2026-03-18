/*
 * XREFs of Package @ 0x1400400A0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall Package(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  _DWORD *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v10; // ecx
  const void *v11; // rdx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes((__int64)a1, a2[10], 0, "I");
  if ( v4 )
    return v4;
  v5 = a2[10];
  if ( *(_QWORD *)(v5 + 16) > 0xFFuLL )
  {
    v4 = -1072431100;
    LogError(-1072431100);
    AcpiDiagTraceAmlError((__int64)a1, -1072431100);
    v10 = 118;
    v11 = *(const void **)(a2[10] + 16LL);
LABEL_8:
    PrintDebugMessage(v10, v11, 0LL, 0LL, 0LL);
    return v4;
  }
  *(_DWORD *)(a2[11] + 24LL) = 40 * *(_DWORD *)(v5 + 16) + 8;
  v6 = (_DWORD *)HeapAlloc(gpheapGlobal, 1196118088, *(_DWORD *)(a2[11] + 24LL));
  if ( !v6 )
  {
    v4 = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError((__int64)a1, -1073741670);
    v10 = 117;
    v11 = (const void *)*(unsigned int *)(a2[11] + 24LL);
    goto LABEL_8;
  }
  v7 = a2[11];
  v12 = 0LL;
  *(_WORD *)(v7 + 2) = 4;
  memset(v6, 0, *(unsigned int *)(a2[11] + 24LL));
  *(_QWORD *)(a2[11] + 32LL) = v6;
  *v6 = *(unsigned __int8 *)(a2[10] + 16LL);
  v4 = PushFrame(a1, 1179077456, 0x38u, (__int64)ParsePackage, &v12);
  if ( !v4 )
  {
    v8 = v12;
    *(_QWORD *)(v12 + 32) = v6;
    *(_QWORD *)(v8 + 48) = a2[5];
  }
  return v4;
}
