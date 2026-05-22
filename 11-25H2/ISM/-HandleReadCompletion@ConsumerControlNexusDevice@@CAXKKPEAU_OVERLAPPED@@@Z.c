/*
 * XREFs of ?HandleReadCompletion@ConsumerControlNexusDevice@@CAXKKPEAU_OVERLAPPED@@@Z @ 0x1800E5B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ConsumerControlNexusDevice::HandleReadCompletion(
        DWORD dwErrorCode,
        DWORD dwNumberOfBytesTransfered,
        char *lpOverlapped)
{
  char *v3; // r8
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  char *v7; // rax
  char **v8; // rcx
  char **v9; // rcx

  v3 = lpOverlapped - 24;
  v4 = dwNumberOfBytesTransfered;
  v5 = *(_QWORD *)v3;
  v6 = *((_QWORD *)v3 + 2);
  *((_QWORD *)v3 + 8) = v4;
  *((_DWORD *)v3 + 14) = dwErrorCode;
  v7 = (char *)(v6 + 48);
  if ( *(char **)(v5 + 8) != v3
    || (v8 = (char **)*((_QWORD *)v3 + 1), *v8 != v3)
    || (*v8 = (char *)v5, *(_QWORD *)(v5 + 8) = v8, --*(_DWORD *)(v6 + 88), v9 = *(char ***)(v6 + 56), *v9 != v7) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v3 = v7;
  *((_QWORD *)v3 + 1) = v9;
  *v9 = v3;
  ++*(_DWORD *)(v6 + 64);
  *(_QWORD *)(v6 + 56) = v3;
}
