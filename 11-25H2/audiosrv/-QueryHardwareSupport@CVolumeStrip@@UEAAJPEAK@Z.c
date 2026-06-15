/*
 * XREFs of ?QueryHardwareSupport@CVolumeStrip@@UEAAJPEAK@Z @ 0x180069D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeStrip::QueryHardwareSupport(CVolumeStrip *this, unsigned int *a2)
{
  BOOL v4; // ebx
  int v5; // edi
  char v6; // al
  int v7; // ecx
  __int64 result; // rax

  if ( !a2 )
    return 2147500035LL;
  v4 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 64LL))(*((_QWORD *)this + 20)) == 0;
  v5 = v4 | 2;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 48LL))(*((_QWORD *)this + 21)) )
    v5 = v4;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 56LL))(*((_QWORD *)this + 22));
  v7 = v5 | 4;
  if ( v6 )
    v7 = v5;
  result = 0LL;
  *a2 = v7;
  return result;
}
