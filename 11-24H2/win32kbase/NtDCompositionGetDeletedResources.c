/*
 * XREFs of NtDCompositionGetDeletedResources @ 0x140107870
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x14006DF90 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetDeletedResources(unsigned int a1, unsigned int a2, void *a3, void *a4)
{
  void *v4; // r13
  __int64 v6; // r15
  int v8; // edi
  struct DirectComposition::CApplicationChannel *v9; // rsi
  unsigned int v10; // r14d
  _BYTE *v11; // r13
  __int64 v12; // r9
  unsigned int v13; // eax
  __int64 v14; // rbx
  unsigned int v16; // [rsp+20h] [rbp-A8h] BYREF
  struct DirectComposition::CApplicationChannel *v17; // [rsp+28h] [rbp-A0h] BYREF
  void *v18; // [rsp+30h] [rbp-98h]
  _BYTE Src[64]; // [rsp+40h] [rbp-88h] BYREF

  v4 = a4;
  v18 = a4;
  v6 = a2;
  v8 = 0;
  v17 = 0LL;
  memset(Src, 0, sizeof(Src));
  if ( (unsigned int)(v6 - 1) > 7 || !a3 || !v4 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v17);
    v9 = v17;
    if ( v8 >= 0 )
    {
      v10 = v6;
      if ( *((_DWORD *)v17 + 143) < (unsigned int)v6 )
        v10 = *((_DWORD *)v17 + 143);
      v16 = v10;
      if ( v10 )
      {
        v11 = Src;
        do
        {
          v12 = *((unsigned int *)v9 + 142);
          v13 = v10;
          if ( v10 >= *((_DWORD *)v9 + 138) - (int)v12 )
            v13 = *((_DWORD *)v9 + 138) - v12;
          v14 = v13;
          memmove(v11, (const void *)(*((_QWORD *)v9 + 66) + v12 * *((_QWORD *)v9 + 70)), *((_QWORD *)v9 + 70) * v13);
          *((_DWORD *)v9 + 142) = (unsigned __int64)(unsigned int)(v14 + *((_DWORD *)v9 + 142)) % *((_QWORD *)v9 + 69);
          *((_DWORD *)v9 + 143) -= v14;
          v11 += 8 * v14;
          v10 -= v14;
        }
        while ( v10 );
        v4 = v18;
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v9)(v9);
      RtlCopyToUser(a3, Src, 8 * v6);
      RtlCopyToUser(v4, &v16, 4uLL);
    }
  }
  return (unsigned int)v8;
}
