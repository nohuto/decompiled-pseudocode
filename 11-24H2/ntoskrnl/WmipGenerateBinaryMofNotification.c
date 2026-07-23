/*
 * XREFs of WmipGenerateBinaryMofNotification @ 0x1407A5BA8
 * Callers:
 *     WmipUpdateDataSource @ 0x1409AF500 (WmipUpdateDataSource.c)
 *     WmipAddDataSource @ 0x1409B01A8 (WmipAddDataSource.c)
 *     WmipDSCleanup @ 0x140A49A00 (WmipDSCleanup.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140423038 (RtlStringCbPrintfExW.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WmipProcessEvent @ 0x1409B1F20 (WmipProcessEvent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall WmipGenerateBinaryMofNotification(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rbp
  char *Pool2; // rax
  char *v11; // rdi
  size_t v12; // rbp
  int v13; // eax
  _DWORD *v14; // rcx
  __int64 v15; // [rsp+38h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 72) )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(a1 + 16);
      if ( (v5 & 2) != 0 )
      {
        v6 = -1LL;
        v7 = v4;
        do
          ++v6;
        while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v4) + 2 * v6) );
        v8 = 2 * v6 + 4;
      }
      else
      {
        if ( (v5 & 1) == 0 )
          return;
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)(*(_QWORD *)(a1 + 88) + 2 * v9 + 4) );
        v8 = 2 * v9 + 14;
        v7 = v4;
      }
      Pool2 = (char *)ExAllocatePool2(0x100uLL, v8 + 74, 0x70696D57u);
      v11 = Pool2;
      if ( Pool2 )
      {
        memset_0(Pool2, 0, v8 + 74);
        *(_DWORD *)v11 = v8 + 74;
        *((_DWORD *)v11 + 1) = 3;
        *((_QWORD *)v11 + 1) = 1LL;
        *((_DWORD *)v11 + 11) = 10;
        *(_OWORD *)(v11 + 24) = *a2;
        *((_QWORD *)v11 + 2) = MEMORY[0xFFFFF78000000014];
        *((_DWORD *)v11 + 15) = v8 + 2;
        v12 = v8 - 2;
        *((_DWORD *)v11 + 12) = 64;
        *((_DWORD *)v11 + 14) = 72;
        *((_WORD *)v11 + 32) = 0;
        *((_WORD *)v11 + 36) = 0;
        v13 = *(_DWORD *)(a1 + 16);
        if ( (v13 & 2) != 0 )
        {
          *((_WORD *)v11 + 37) = v12;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)v11 + 38, v12, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 88) + 8 * v7));
        }
        else if ( (v13 & 1) != 0 )
        {
          v14 = *(_DWORD **)(a1 + 88);
          LODWORD(v15) = v4 + *v14;
          RtlStringCbPrintfExW((NTSTRSAFE_PWSTR)v11 + 38, v12, 0LL, 0LL, 0x200u, L"%ws%d", v14 + 1, v15);
          *((_WORD *)v11 + 37) = v12;
        }
        WmipProcessEvent(v11);
        ExFreePoolWithTag(v11, 0);
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 72) );
  }
}
