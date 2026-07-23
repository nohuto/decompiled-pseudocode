/*
 * XREFs of HalpLMStub @ 0x1406A6B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpLMStub()
{
  unsigned __int64 v0; // rax
  __int64 v1; // rdi
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned int v4; // edx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  char v9; // cl
  __int64 v10; // rax

  __writecr3(v0);
  if ( (*(_DWORD *)(v1 + 8) & 8) == 0 )
  {
    v2 = __readcr4();
    v2 ^= 0x80uLL;
    __writecr4(v2);
    v3 = __readcr3();
    __writecr3(v3);
    __writecr4(v2 ^ 0x80);
    LODWORD(v3) = *(_DWORD *)(v1 + 128);
    v4 = *(_DWORD *)(v1 + 132);
    __wbinvd();
    __writemsr(0x277u, __PAIR64__(v4, v3));
    __wbinvd();
    v5 = __readcr4();
    v5 ^= 0x80uLL;
    __writecr4(v5);
    v6 = __readcr3();
    __writecr3(v6);
    __writecr4(v5 ^ 0x80);
  }
  __lgdt((void *)(v1 + 230));
  __lidt((void *)(v1 + 246));
  _AX = *(_WORD *)(v1 + 258);
  __asm { lldt    ax }
  v8 = *(_QWORD *)(v1 + 232);
  v9 = *(_BYTE *)(v8 + 85);
  *(_BYTE *)(v8 + 85) = v9 | 0x80;
  __DS__ = *(_WORD *)(v1 + 442);
  *(_BYTE *)(v8 + 85) = v9;
  v10 = *(_QWORD *)(v1 + 232) + *(unsigned __int16 *)(v1 + 256);
  *(_BYTE *)(v10 + 5) &= ~2u;
  __asm { ltr     word ptr [rdi+100h] }
  return HalpLMStubVmTarget();
}
