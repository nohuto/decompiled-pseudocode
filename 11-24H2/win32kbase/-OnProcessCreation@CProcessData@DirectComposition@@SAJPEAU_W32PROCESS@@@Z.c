/*
 * XREFs of ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1400732D8
 * Callers:
 *     DCompositionProcessCallout @ 0x140073290 (DCompositionProcessCallout.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x140073364 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x14007338C (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x140073418 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DirectComposition::CProcessData::OnProcessCreation(struct _W32PROCESS *a1)
{
  struct DirectComposition::CProcessData *v2; // rax
  struct DirectComposition::CProcessData *v3; // rbx
  unsigned int v4; // edx
  int v5; // edi

  v2 = (struct DirectComposition::CProcessData *)Win32AllocPoolWithQuotaZInitImpl((__int64)a1, 0x48uLL, 0x64704344u);
  v3 = v2;
  if ( !v2 )
  {
    v5 = -1073741801;
LABEL_7:
    v3 = 0LL;
    goto LABEL_5;
  }
  memset(v2, 0, 0x48uLL);
  *((_BYTE *)v3 + 48) = 0;
  v5 = DirectComposition::CConnection::OnProcessCreation(v3);
  if ( v5 >= 0 )
    v5 = DirectComposition::CChannel::OnProcessCreation(v3);
  if ( v5 < 0 )
  {
    DirectComposition::CProcessData::`scalar deleting destructor'(v3, v4);
    goto LABEL_7;
  }
LABEL_5:
  *((_QWORD *)a1 + 32) = v3;
  return (unsigned int)v5;
}
