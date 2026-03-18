/*
 * XREFs of MiMapImageForEnclaveUse @ 0x1409CC068
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1407E78EC (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1409CB8C0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     MmMapViewOfSectionEx @ 0x140482368 (MmMapViewOfSectionEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 */

__int64 __fastcall MiMapImageForEnclaveUse(ULONG_PTR a1, __int64 a2, char a3, int a4, ULONG_PTR *a5)
{
  __int64 result; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  ULONG_PTR v10; // rsi
  int v11; // edi
  ULONG_PTR v12; // rbx
  __int64 v13; // [rsp+58h] [rbp-49h]
  PVOID Object; // [rsp+70h] [rbp-31h] BYREF
  __int64 v15; // [rsp+78h] [rbp-29h] BYREF
  __int64 v16; // [rsp+80h] [rbp-21h] BYREF
  __int128 v17; // [rsp+88h] [rbp-19h] BYREF
  _OWORD v18[3]; // [rsp+98h] [rbp-9h] BYREF

  Object = 0LL;
  memset(v18, 0, sizeof(v18));
  v17 = 0LL;
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
          KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v18);
          v16 = 0LL;
          v15 = 0LL;
          *(_QWORD *)&v17 = 5LL;
          *((_QWORD *)&v17 + 1) = 512LL;
          v11 = MmMapViewOfSectionEx(
                  (int)Object,
                  PsSecureSystemProcess,
                  a4,
                  (__int64)&v16,
                  (__int64)&v15,
                  0,
                  2,
                  &v17,
                  1,
                  0,
                  0LL,
                  v13,
                  0x2000000);
          KiUnstackDetachProcess((__int64)v18, 0LL);
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
