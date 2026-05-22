/*
 * XREFs of ?Add@GestureSession@@UEAAJKKKPEBUTouchContactInfo@@@Z @ 0x1801B2EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordContacts@TouchContactFilter@@QEAAXKPEBUTouchContactInfo@@@Z @ 0x1801B5718 (-RecordContacts@TouchContactFilter@@QEAAXKPEBUTouchContactInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GestureSession::Add(
        GestureSession *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        const struct TouchContactInfo *a5)
{
  __int64 v5; // rsi
  __int64 result; // rax
  int v10; // edi
  _QWORD *v11; // r14

  v5 = a2;
  if ( (a2 & 0x8000) != 0 )
  {
    (*(void (__fastcall **)(GestureSession *))(*(_QWORD *)this + 72LL))(this);
  }
  else
  {
    if ( !a4 )
      return 2147942487LL;
    if ( (a2 & 0x101) == 1 )
      (*(void (__fastcall **)(GestureSession *))(*(_QWORD *)this + 80LL))(this);
    TouchContactFilter::RecordContacts((GestureSession *)((char *)this + 744), a4, a5);
    if ( (v5 & 1) != 0 )
      *((_QWORD *)this + 149) = *(_QWORD *)((char *)this + 1156);
    v10 = 0;
    v11 = (_QWORD *)((char *)this + 704);
    while ( v10 < 5 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, GestureSession *, __int64, _QWORD, unsigned int, const struct TouchContactInfo *))(*(_QWORD *)*v11 + 8LL))(
                 *v11,
                 this,
                 v5,
                 a3,
                 a4,
                 a5);
      if ( (int)result < 0 )
        return result;
      ++v10;
      ++v11;
    }
    *((_BYTE *)this + 24) = 1;
  }
  return 0LL;
}
