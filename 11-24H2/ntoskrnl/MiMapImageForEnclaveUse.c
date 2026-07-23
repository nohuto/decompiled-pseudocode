/*
 * XREFs of MiMapImageForEnclaveUse @ 0x140A2AB18
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1407F7EF0 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A2A370 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     MmMapViewOfSectionEx @ 0x14047E1D4 (MmMapViewOfSectionEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 */

__int64 __fastcall MiMapImageForEnclaveUse(ULONG_PTR a1, __int64 a2, char a3, int a4, ULONG_PTR *a5)
{
  __int64 result; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  ULONG_PTR v10; // rsi
  int v11; // edi
  ULONG_PTR v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+58h] [rbp-49h]
  PVOID Object; // [rsp+70h] [rbp-31h] BYREF
  __int64 v17; // [rsp+78h] [rbp-29h] BYREF
  __int64 v18; // [rsp+80h] [rbp-21h] BYREF
  __int128 v19; // [rsp+88h] [rbp-19h] BYREF
  _OWORD v20[3]; // [rsp+98h] [rbp-9h] BYREF

  Object = 0LL;
  memset(v20, 0, sizeof(v20));
  v19 = 0LL;
  result = ObpReferenceObjectByHandleWithTag(a1, 4, (__int64)MmSectionObjectType, a3, 0x6D566D4Du, &Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = MiSectionControlArea((__int64)Object);
    v10 = v8;
    if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(v8 + 92) & 0xC0000) != 0 )
        goto LABEL_9;
      if ( (*(_QWORD *)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 40) & 0xFFFFFFFFFFFFFFF8uLL) <= 0x7FFFFFFFFFFFFFF8LL )
      {
        v12 = MiReferenceControlAreaFile(v8);
        v11 = MiValidateSectionCreate(v12, v10, 0xFFFFFFFF, a2, 0x40000000, 4, 0);
        MiDereferenceControlAreaFile(v10, v12);
        if ( v11 < 0 )
          goto LABEL_10;
        if ( (*(_DWORD *)(v10 + 92) & 0xC0000) != 0 )
        {
LABEL_9:
          KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v20);
          v18 = 0LL;
          v17 = 0LL;
          *(_QWORD *)&v19 = 5LL;
          *((_QWORD *)&v19 + 1) = 512LL;
          v11 = MmMapViewOfSectionEx(
                  (int)Object,
                  PsSecureSystemProcess,
                  a4,
                  (__int64)&v18,
                  (__int64)&v17,
                  0,
                  2,
                  &v19,
                  1,
                  0,
                  0LL,
                  v15,
                  0x2000000);
          KiUnstackDetachProcess((__int64)v20, 0, v13, v14);
          *a5 = v10;
          goto LABEL_10;
        }
      }
      v11 = -1073740760;
    }
    else
    {
      v11 = -1073741751;
    }
LABEL_10:
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return (unsigned int)v11;
  }
  return result;
}
