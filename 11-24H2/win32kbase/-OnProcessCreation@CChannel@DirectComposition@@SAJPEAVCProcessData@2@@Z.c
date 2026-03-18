/*
 * XREFs of ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x140073418
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1400732D8 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannel::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v1; // rsi
  struct _RTL_GENERIC_TABLE *v3; // rax
  char *v4; // rdi
  struct _ERESOURCE *v5; // rax
  NTSTATUS v6; // ebx
  __int64 result; // rax

  v1 = 0LL;
  v3 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolWithQuotaZInitImpl((__int64)a1, 0x48uLL, 0x74634344u);
  v4 = (char *)v3;
  if ( !v3 )
  {
    v4 = 0LL;
    v6 = -1073741801;
    goto LABEL_4;
  }
  RtlInitializeGenericTable(
    v3,
    DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::CompareTableEntries,
    DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::AllocateTableEntry,
    rimUserMemAllocNodeFree,
    0LL);
  v5 = (struct _ERESOURCE *)Win32AllocPoolImpl(0x40uLL, 0x68uLL, 0x73634344u);
  v1 = v5;
  if ( v5 )
  {
    memset(v5, 0, sizeof(struct _ERESOURCE));
    v6 = ExInitializeResourceLite(v1);
    if ( v6 >= 0 )
      goto LABEL_4;
  }
  else
  {
    v1 = 0LL;
    v6 = -1073741801;
  }
  GreDeleteFastMutex(v4);
  v4 = 0LL;
  if ( v1 )
  {
    GreDeleteFastMutex((char *)v1);
    v1 = 0LL;
  }
LABEL_4:
  *(_QWORD *)a1 = v4;
  result = (unsigned int)v6;
  *((_QWORD *)a1 + 1) = v1;
  return result;
}
