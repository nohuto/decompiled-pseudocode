/*
 * XREFs of NtGdiGetCertificateByHandle @ 0x14008ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x14008AECC (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x14008B2D4 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14008C2B0 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall NtGdiGetCertificateByHandle(void *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, void *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  unsigned __int8 *Pool2; // rsi
  void *v10; // rdx
  int CertificateSize; // edi
  SIZE_T Length; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]
  unsigned __int8 *v15; // [rsp+40h] [rbp-28h]

  v8 = 0;
  LODWORD(Length) = 0;
  Pool2 = 0LL;
  v14 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  CertificateSize = COPM::GetCertificateSize(*(COPM **)(v14 + 3648), a1, a2, (unsigned int *)&Length);
  if ( CertificateSize >= 0 )
  {
    if ( a4 >= (unsigned int)Length )
    {
      Pool2 = (unsigned __int8 *)ExAllocatePool2(258LL, (unsigned int)Length, 1297108807LL);
      v15 = Pool2;
      if ( Pool2 )
      {
        CertificateSize = COPM::GetCertificate(*(COPM **)(v14 + 3648), a1, a2, Pool2, Length);
        if ( CertificateSize >= 0 )
        {
          ProbeForWrite(a3, (unsigned int)Length, 1u);
          memmove(a3, Pool2, (unsigned int)Length);
        }
      }
      else
      {
        CertificateSize = -1073741801;
      }
    }
    else
    {
      CertificateSize = -1071774450;
    }
  }
  OPM::OPMFreeMemory((OPM *)Pool2, v10);
  if ( CertificateSize < 0 )
    return (unsigned int)CertificateSize;
  return v8;
}
